#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <osg/AnimationPath>
#include <osg/Referenced>
#include <osgGA/CameraManipulator>
#include <osg/Object>
#include <osg/Camera>
#include <osg/Drawable>
#include <osgUtil/EdgeCollector>
#include <osg/ClampColor>
#include <osg/BlendColor>
#include <osg/BlendEquation>
#include <osg/BlendFunc>
#include <osgText/Font>
#include <osg/KdTree>
#include <osg/BufferObject>
#include <osgDB/ExternalFileWriter>
#include <osg/ArgumentParser>
#include <osg/PagedLOD>
#include <osgDB/ImageOptions>
#include <osg/Program>
#include <osgUtil/IntersectionVisitor>
#include <osgDB/ReaderWriter>
#include <osg/GraphicsContext>
#include <osgUtil/RenderBin>
#include <osg/Texture>
#include <osgGA/GUIEventAdapter>
#include <osg/StateAttributeCallback>
#include <osg/Image>
#include <osg/View>
#include <osg/Geometry>
#include <osgViewer/ViewerEventHandlers>
#include <OpenThreads/Atomic>
#include <OpenThreads/Barrier>
#include <OpenThreads/Block>
#include <OpenThreads/Condition>
#include <OpenThreads/Mutex>
#include <OpenThreads/ReadWriteMutex>
#include <OpenThreads/ReentrantMutex>
#include <OpenThreads/Thread>
#include <osg/Array>
#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/GraphicsCostEstimator>
#include <osg/Group>
#include <osg/ImageUtils>
#include <osg/Node>
#include <osg/ObserverNodePath>
#include <osg/PrimitiveSet>
#include <osg/ShaderComposer>
#include <osg/ShadowVolumeOccluder>
#include <osg/Uniform>
#include <osg/ValueObject>
#include <plug_extensions.h>
#include <osg/StateAttribute>
#include <osg/AlphaFunc>
#include <osg/NodeCallback>
#include <osg/ApplicationUsage>
#include <osg/ArrayDispatchers>
#include <osg/AudioStream>
#include <osg/Transform>
#include <osg/AutoTransform>
#include <osg/Geode>
#include <osg/Billboard>
#include <osg/BufferIndexBinding>
#include <osg/CullSettings>
#include <osg/CameraView>
#include <osg/ClearNode>
#include <osg/ClipNode>
#include <osg/ClipPlane>
#include <osg/ClusterCullingCallback>
#include <osg/CullStack>
#include <osg/NodeVisitor>
#include <osg/CollectOccludersVisitor>
#include <osg/ColorMask>
#include <osg/ColorMatrix>
#include <osg/ComputeBoundsVisitor>
#include <osg/ConvexPlanarOccluder>
#include <osg/ConvexPlanarPolygon>
#include <osg/CoordinateSystemNode>
#include <osg/CopyOp>
#include <osg/CullFace>
#include <osg/CullingSet>
#include <osg/DeleteHandler>
#include <osg/Depth>
#include <osg/DisplaySettings>
#include <osg/DrawPixels>
#include <osg/Fog>
#include <osg/FragmentProgram>
#include <osg/FrameBufferObject>
#include <osg/FrameStamp>
#include <osg/FrontFace>
#include <osg/GL2Extensions>
#include <osg/GLBeginEndAdapter>
#include <osg/GLU>
#include <osg/OperationThread>
#include <osg/GraphicsThread>
#include <osg/State>
#include <osg/Hint>
#include <osg/ImageStream>
#include <osg/ImageSequence>
#include <osg/Shape>
#include <osg/Light>
#include <osg/LightModel>
#include <osg/LightSource>
#include <osg/LineSegment>
#include <osg/LineStipple>
#include <osg/LineWidth>
#include <osg/LOD>
#include <osg/LogicOp>
#include <osg/Material>
#include <osg/Matrixd>
#include <osg/Matrixf>
#include <osg/MatrixTransform>
#include <osg/Multisample>
#include <osg/NodeTrackerCallback>
#include <osg/Notify>
#include <osg/Observer>
#include <osg/OccluderNode>
#include <osg/OcclusionQueryNode>
#include <osg/Plane>
#include <osg/Point>
#include <osg/PointSprite>
#include <osg/PolygonMode>
#include <osg/PolygonOffset>
#include <osg/PolygonStipple>
#include <osg/Polytope>
#include <osg/PositionAttitudeTransform>
#include <osg/Projection>
#include <osg/ProxyNode>
#include <osg/Quat>
#include <osg/RenderInfo>
#include <osg/SampleMaski>
#include <osg/Scissor>
#include <osg/Sequence>
#include <osg/ShadeModel>
#include <osg/Shader>
#include <osg/ShaderAttribute>
#include <osg/ShapeDrawable>
#include <osg/StateSet>
#include <osg/Stats>
#include <osg/Stencil>
#include <osg/StencilTwoSided>
#include <osg/Switch>
#include <osg/TexEnv>
#include <osg/TexEnvCombine>
#include <osg/TexEnvFilter>
#include <osg/TexGen>
#include <osg/TexGenNode>
#include <osg/TexMat>
#include <osg/Texture1D>
#include <osg/Texture2D>
#include <osg/Texture2DArray>
#include <osg/Texture2DMultisample>
#include <osg/Texture3D>
#include <osg/TextureCubeMap>
#include <osg/TextureRectangle>
#include <osg/Timer>
#include <osg/TransferFunction>
#include <osg/UserDataContainer>
#include <osg/Vec2b>
#include <osg/Vec2d>
#include <osg/Vec2f>
#include <osg/Vec2s>
#include <osg/Vec3b>
#include <osg/Vec3d>
#include <osg/Vec3f>
#include <osg/Vec3s>
#include <osg/Vec4b>
#include <osg/Vec4d>
#include <osg/Vec4f>
#include <osg/Vec4s>
#include <osg/Vec4ub>
#include <osg/VertexProgram>
#include <osg/Viewport>
#include <osgDB/Callbacks>
#include <osgDB/FileUtils>
#include <osgDB/ObjectWrapper>
#include <osgDB/PluginQuery>
#include <osgDB/Archive>
#include <osgDB/AuthenticationMap>
#include <osgDB/DatabasePager>
#include <osgDB/DatabaseRevisions>
#include <osgDB/DataTypes>
#include <osgDB/DotOsgWrapper>
#include <osgDB/DynamicLibrary>
#include <osgDB/FileCache>
#include <osgDB/FileNameUtils>
#include <osgDB/fstream>
#include <osgDB/Options>
#include <osgDB/ImagePager>
#include <osgDB/ImageProcessor>
#include <osgDB/Input>
#include <osgDB/InputStream>
#include <osgDB/Output>
#include <osgDB/OutputStream>
#include <osgDB/ParameterOutput>
#include <osgDB/Registry>
#include <osgDB/Serializer>
#include <osgDB/SharedStateManager>
#include <osgDB/StreamOperator>
#include <osgDB/XmlParser>
#include <osgGA/GUIEventHandler>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/CameraViewSwitchManipulator>
#include <osgGA/Device>
#include <osgGA/DriveManipulator>
#include <osgGA/EventQueue>
#include <osgGA/EventVisitor>
#include <osgGA/StandardManipulator>
#include <osgGA/FirstPersonManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/GUIActionAdapter>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/OrbitManipulator>
#include <osgGA/TrackballManipulator>
#include <osgGA/MultiTouchTrackballManipulator>
#include <osgGA/NodeTrackerManipulator>
#include <osgGA/SphericalManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/TerrainManipulator>
#include <osgGA/UFOManipulator>
#include <osgParticle/range>
#include <osgParticle/Operator>
#include <osgParticle/AccelOperator>
#include <osgParticle/AngularAccelOperator>
#include <osgParticle/AngularDampingOperator>
#include <osgParticle/DomainOperator>
#include <osgParticle/BounceOperator>
#include <osgParticle/Placer>
#include <osgParticle/CenteredPlacer>
#include <osgParticle/BoxPlacer>
#include <osgParticle/CompositePlacer>
#include <osgParticle/ParticleSystem>
#include <osgParticle/ConnectedParticleSystem>
#include <osgParticle/Counter>
#include <osgParticle/ConstantRateCounter>
#include <osgParticle/DampingOperator>
#include <osgParticle/ParticleProcessor>
#include <osgParticle/Emitter>
#include <osgParticle/ParticleEffect>
#include <osgParticle/ExplosionDebrisEffect>
#include <osgParticle/ExplosionEffect>
#include <osgParticle/ExplosionOperator>
#include <osgParticle/FireEffect>
#include <osgParticle/FluidFrictionOperator>
#include <osgParticle/Program>
#include <osgParticle/FluidProgram>
#include <osgParticle/ForceOperator>
#include <osgParticle/Interpolator>
#include <osgParticle/LinearInterpolator>
#include <osgParticle/ModularEmitter>
#include <osgParticle/ModularProgram>
#include <osgParticle/MultiSegmentPlacer>
#include <osgParticle/OrbitOperator>
#include <osgParticle/Particle>
#include <osgParticle/ParticleSystemUpdater>
#include <osgParticle/PointPlacer>
#include <osgParticle/PrecipitationEffect>
#include <osgParticle/Shooter>
#include <osgParticle/RadialShooter>
#include <osgParticle/VariableRateCounter>
#include <osgParticle/RandomRateCounter>
#include <osgParticle/SectorPlacer>
#include <osgParticle/SegmentPlacer>
#include <osgParticle/SinkOperator>
#include <osgParticle/SmokeEffect>
#include <osgParticle/SmokeTrailEffect>
#include <osgText/KerningType>
#include <osgText/TextBase>
#include <osgText/Text>
#include <osgText/FadeText>
#include <osgText/Glyph>
#include <osgText/String>
#include <osgText/Style>
#include <osgText/Text3D>
#include <osgUtil/CubeMapGenerator>
#include <osgUtil/CullVisitor>
#include <osgUtil/DelaunayTriangulator>
#include <osgUtil/DisplayRequirementsVisitor>
#include <osgUtil/DrawElementTypeSimplifier>
#include <osgUtil/GLObjectsVisitor>
#include <osgUtil/HalfWayMapGenerator>
#include <osgUtil/HighlightMapGenerator>
#include <osgUtil/IncrementalCompileOperation>
#include <osgUtil/IntersectVisitor>
#include <osgUtil/LineSegmentIntersector>
#include <osgUtil/Optimizer>
#include <osgUtil/MeshOptimizers>
#include <osgUtil/OperationArrayFunctor>
#include <osgUtil/PerlinNoise>
#include <osgUtil/PlaneIntersector>
#include <osgUtil/PolytopeIntersector>
#include <osgUtil/PositionalStateContainer>
#include <osgUtil/PrintVisitor>
#include <osgUtil/ReflectionMapGenerator>
#include <osgUtil/RenderLeaf>
#include <osgUtil/RenderStage>
#include <osgUtil/SceneGraphBuilder>
#include <osgUtil/SceneView>
#include <osgUtil/ShaderGen>
#include <osgUtil/Simplifier>
#include <osgUtil/SmoothingVisitor>
#include <osgUtil/StateGraph>
#include <osgUtil/Statistics>
#include <osgUtil/TangentSpaceGenerator>
#include <osgUtil/Tessellator>
#include <osgUtil/TransformCallback>
#include <osgUtil/TriStripVisitor>
#include <osgUtil/UpdateVisitor>
#include <osgViewer/ViewerBase>
#include <osgViewer/CompositeViewer>
#include <osgViewer/GraphicsWindow>
#include <osgViewer/Renderer>
#include <osgViewer/Scene>
#include <osgViewer/View>
#include <osgViewer/Viewer>

using namespace osg;
using namespace osgUtil;
using namespace osgDB;
using namespace osgText;
using namespace osgParticle;
using namespace OpenThreads;

// Class: __int64
template<>
class LunaTraits< __int64 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static __int64* _bind_ctor(lua_State *L);
	static void _bind_dtor(__int64* obj);
	typedef __int64 parent_t;
	typedef __int64 base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AnimationPath::ControlPoint
template<>
class LunaTraits< osg::AnimationPath::ControlPoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AnimationPath::ControlPoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AnimationPath::ControlPoint* obj);
	typedef osg::AnimationPath::ControlPoint parent_t;
	typedef osg::AnimationPath::ControlPoint base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::CameraManipulator::CoordinateFrameCallback
template<>
class LunaTraits< osgGA::CameraManipulator::CoordinateFrameCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::CameraManipulator::CoordinateFrameCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::CameraManipulator::CoordinateFrameCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::CameraManipulator::CoordinateFrameCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Object
template<>
class LunaTraits< osg::Object > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Object* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Object* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Object base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Camera::DrawCallback
template<>
class LunaTraits< osg::Camera::DrawCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Camera::DrawCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Camera::DrawCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Camera::DrawCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Drawable::DrawCallback
template<>
class LunaTraits< osg::Drawable::DrawCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable::DrawCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable::DrawCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable::DrawCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::EdgeCollector::Edgeloop
template<>
class LunaTraits< osgUtil::EdgeCollector::Edgeloop > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::EdgeCollector::Edgeloop* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::EdgeCollector::Edgeloop* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::EdgeCollector::Edgeloop base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* obj);
	typedef std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > parent_t;
	typedef std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Drawable::EventCallback
template<>
class LunaTraits< osg::Drawable::EventCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable::EventCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable::EventCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable::EventCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ClampColor::Extensions
template<>
class LunaTraits< osg::ClampColor::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ClampColor::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ClampColor::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ClampColor::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BlendColor::Extensions
template<>
class LunaTraits< osg::BlendColor::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BlendColor::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BlendColor::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BlendColor::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BlendEquation::Extensions
template<>
class LunaTraits< osg::BlendEquation::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BlendEquation::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BlendEquation::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BlendEquation::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BlendFunc::Extensions
template<>
class LunaTraits< osg::BlendFunc::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BlendFunc::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BlendFunc::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BlendFunc::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Drawable::Extensions
template<>
class LunaTraits< osg::Drawable::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::Font::FontImplementation
template<>
class LunaTraits< osgText::Font::FontImplementation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::Font::FontImplementation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::Font::FontImplementation* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::Font::FontImplementation base_t;
	static luna_ConverterType converters[];
};

// Class: GLUtesselator
template<>
class LunaTraits< GLUtesselator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static GLUtesselator* _bind_ctor(lua_State *L);
	static void _bind_dtor(GLUtesselator* obj);
	typedef GLUtesselator parent_t;
	typedef GLUtesselator base_t;
	static luna_ConverterType converters[];
};

// Class: osg::KdTree::LineSegmentIntersection
template<>
class LunaTraits< osg::KdTree::LineSegmentIntersection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::KdTree::LineSegmentIntersection* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::KdTree::LineSegmentIntersection* obj);
	typedef osg::KdTree::LineSegmentIntersection parent_t;
	typedef osg::KdTree::LineSegmentIntersection base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< unsigned int >
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

// Class: std::vector< double >
template<>
class LunaTraits< std::vector< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< double >* obj);
	typedef std::vector< double > parent_t;
	typedef std::vector< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BufferData::ModifiedCallback
template<>
class LunaTraits< osg::BufferData::ModifiedCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BufferData::ModifiedCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BufferData::ModifiedCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BufferData::ModifiedCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ExternalFileWriter::ObjectData
template<>
class LunaTraits< osgDB::ExternalFileWriter::ObjectData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ExternalFileWriter::ObjectData* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ExternalFileWriter::ObjectData* obj);
	typedef osgDB::ExternalFileWriter::ObjectData parent_t;
	typedef osgDB::ExternalFileWriter::ObjectData base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ArgumentParser::Parameter
template<>
class LunaTraits< osg::ArgumentParser::Parameter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ArgumentParser::Parameter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ArgumentParser::Parameter* obj);
	typedef osg::ArgumentParser::Parameter parent_t;
	typedef osg::ArgumentParser::Parameter base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PagedLOD::PerRangeData
template<>
class LunaTraits< osg::PagedLOD::PerRangeData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PagedLOD::PerRangeData* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PagedLOD::PerRangeData* obj);
	typedef osg::PagedLOD::PerRangeData parent_t;
	typedef osg::PagedLOD::PerRangeData base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ImageOptions::PixelWindow
template<>
class LunaTraits< osgDB::ImageOptions::PixelWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ImageOptions::PixelWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ImageOptions::PixelWindow* obj);
	typedef osgDB::ImageOptions::PixelWindow parent_t;
	typedef osgDB::ImageOptions::PixelWindow base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::EdgeCollector::Point
template<>
class LunaTraits< osgUtil::EdgeCollector::Point > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::EdgeCollector::Point* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::EdgeCollector::Point* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::EdgeCollector::Point base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Program::ProgramBinary
template<>
class LunaTraits< osg::Program::ProgramBinary > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Program::ProgramBinary* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Program::ProgramBinary* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Program::ProgramBinary base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ImageOptions::RatioWindow
template<>
class LunaTraits< osgDB::ImageOptions::RatioWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ImageOptions::RatioWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ImageOptions::RatioWindow* obj);
	typedef osgDB::ImageOptions::RatioWindow parent_t;
	typedef osgDB::ImageOptions::RatioWindow base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IntersectionVisitor::ReadCallback
template<>
class LunaTraits< osgUtil::IntersectionVisitor::ReadCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IntersectionVisitor::ReadCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IntersectionVisitor::ReadCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IntersectionVisitor::ReadCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ReaderWriter::ReadResult
template<>
class LunaTraits< osgDB::ReaderWriter::ReadResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ReaderWriter::ReadResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ReaderWriter::ReadResult* obj);
	typedef osgDB::ReaderWriter::ReadResult parent_t;
	typedef osgDB::ReaderWriter::ReadResult base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsContext::ResizedCallback
template<>
class LunaTraits< osg::GraphicsContext::ResizedCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsContext::ResizedCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsContext::ResizedCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GraphicsContext::ResizedCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsContext::ScreenIdentifier
template<>
class LunaTraits< osg::GraphicsContext::ScreenIdentifier > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsContext::ScreenIdentifier* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsContext::ScreenIdentifier* obj);
	typedef osg::GraphicsContext::ScreenIdentifier parent_t;
	typedef osg::GraphicsContext::ScreenIdentifier base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsContext::ScreenSettings
template<>
class LunaTraits< osg::GraphicsContext::ScreenSettings > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsContext::ScreenSettings* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsContext::ScreenSettings* obj);
	typedef osg::GraphicsContext::ScreenSettings parent_t;
	typedef osg::GraphicsContext::ScreenSettings base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::RenderBin::SortCallback
template<>
class LunaTraits< osgUtil::RenderBin::SortCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::RenderBin::SortCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::RenderBin::SortCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::RenderBin::SortCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsContext::SwapCallback
template<>
class LunaTraits< osg::GraphicsContext::SwapCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsContext::SwapCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsContext::SwapCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GraphicsContext::SwapCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ImageOptions::TexCoordRange
template<>
class LunaTraits< osgDB::ImageOptions::TexCoordRange > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ImageOptions::TexCoordRange* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ImageOptions::TexCoordRange* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::ImageOptions::TexCoordRange base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture::TextureObject
template<>
class LunaTraits< osg::Texture::TextureObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture::TextureObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture::TextureObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture::TextureObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture::TextureObjectManager
template<>
class LunaTraits< osg::Texture::TextureObjectManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture::TextureObjectManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture::TextureObjectManager* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture::TextureObjectManager base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture::TextureObjectSet
template<>
class LunaTraits< osg::Texture::TextureObjectSet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture::TextureObjectSet* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture::TextureObjectSet* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture::TextureObjectSet base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture::TextureProfile
template<>
class LunaTraits< osg::Texture::TextureProfile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture::TextureProfile* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture::TextureProfile* obj);
	typedef osg::Texture::TextureProfile parent_t;
	typedef osg::Texture::TextureProfile base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::GUIEventAdapter::TouchData
template<>
class LunaTraits< osgGA::GUIEventAdapter::TouchData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventAdapter::TouchData* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventAdapter::TouchData* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::GUIEventAdapter::TouchData base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >
template<>
class LunaTraits< std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint >* obj);
	typedef std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > parent_t;
	typedef std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::GUIEventAdapter::TouchData::TouchPoint
template<>
class LunaTraits< osgGA::GUIEventAdapter::TouchData::TouchPoint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventAdapter::TouchData::TouchPoint* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventAdapter::TouchData::TouchPoint* obj);
	typedef osgGA::GUIEventAdapter::TouchData::TouchPoint parent_t;
	typedef osgGA::GUIEventAdapter::TouchData::TouchPoint base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsContext::Traits
template<>
class LunaTraits< osg::GraphicsContext::Traits > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsContext::Traits* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsContext::Traits* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GraphicsContext::Traits base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::EdgeCollector::Triangle
template<>
class LunaTraits< osgUtil::EdgeCollector::Triangle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::EdgeCollector::Triangle* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::EdgeCollector::Triangle* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::EdgeCollector::Triangle base_t;
	static luna_ConverterType converters[];
};

// Class: osg::KdTree::Triangle
template<>
class LunaTraits< osg::KdTree::Triangle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::KdTree::Triangle* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::KdTree::Triangle* obj);
	typedef osg::KdTree::Triangle parent_t;
	typedef osg::KdTree::Triangle base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Program::UniformBlockInfo
template<>
class LunaTraits< osg::Program::UniformBlockInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Program::UniformBlockInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Program::UniformBlockInfo* obj);
	typedef osg::Program::UniformBlockInfo parent_t;
	typedef osg::Program::UniformBlockInfo base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Drawable::UpdateCallback
template<>
class LunaTraits< osg::Drawable::UpdateCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable::UpdateCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable::UpdateCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable::UpdateCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::StateAttributeCallback
template<>
class LunaTraits< osg::StateAttributeCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::StateAttributeCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::StateAttributeCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::StateAttributeCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Image::UpdateCallback
template<>
class LunaTraits< osg::Image::UpdateCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Image::UpdateCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Image::UpdateCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Image::UpdateCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::View::Slave::UpdateSlaveCallback
template<>
class LunaTraits< osg::View::Slave::UpdateSlaveCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::View::Slave::UpdateSlaveCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::View::Slave::UpdateSlaveCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::View::Slave::UpdateSlaveCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Geometry::Vec3ArrayData
template<>
class LunaTraits< osg::Geometry::Vec3ArrayData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Geometry::Vec3ArrayData* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Geometry::Vec3ArrayData* obj);
	typedef osg::Geometry::Vec3ArrayData parent_t;
	typedef osg::Geometry::Vec3ArrayData base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsContext::WindowingSystemInterface
template<>
class LunaTraits< osg::GraphicsContext::WindowingSystemInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsContext::WindowingSystemInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsContext::WindowingSystemInterface* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GraphicsContext::WindowingSystemInterface base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ReaderWriter::WriteResult
template<>
class LunaTraits< osgDB::ReaderWriter::WriteResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ReaderWriter::WriteResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ReaderWriter::WriteResult* obj);
	typedef osgDB::ReaderWriter::WriteResult parent_t;
	typedef osgDB::ReaderWriter::WriteResult base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::ScreenCaptureHandler::CaptureOperation
template<>
class LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::ScreenCaptureHandler::CaptureOperation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::ScreenCaptureHandler::CaptureOperation* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::ScreenCaptureHandler::CaptureOperation base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::ScreenCaptureHandler::WriteToFile
template<>
class LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::ScreenCaptureHandler::WriteToFile* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::ScreenCaptureHandler::WriteToFile* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::ScreenCaptureHandler::WriteToFile base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::Atomic
template<>
class LunaTraits< OpenThreads::Atomic > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::Atomic* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::Atomic* obj);
	typedef OpenThreads::Atomic parent_t;
	typedef OpenThreads::Atomic base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::AtomicPtr
template<>
class LunaTraits< OpenThreads::AtomicPtr > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::AtomicPtr* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::AtomicPtr* obj);
	typedef OpenThreads::AtomicPtr parent_t;
	typedef OpenThreads::AtomicPtr base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::Barrier
template<>
class LunaTraits< OpenThreads::Barrier > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::Barrier* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::Barrier* obj);
	typedef OpenThreads::Barrier parent_t;
	typedef OpenThreads::Barrier base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::Block
template<>
class LunaTraits< OpenThreads::Block > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::Block* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::Block* obj);
	typedef OpenThreads::Block parent_t;
	typedef OpenThreads::Block base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::BlockCount
template<>
class LunaTraits< OpenThreads::BlockCount > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::BlockCount* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::BlockCount* obj);
	typedef OpenThreads::BlockCount parent_t;
	typedef OpenThreads::BlockCount base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::Condition
template<>
class LunaTraits< OpenThreads::Condition > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::Condition* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::Condition* obj);
	typedef OpenThreads::Condition parent_t;
	typedef OpenThreads::Condition base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::Mutex
template<>
class LunaTraits< OpenThreads::Mutex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::Mutex* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::Mutex* obj);
	typedef OpenThreads::Mutex parent_t;
	typedef OpenThreads::Mutex base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::ReadWriteMutex
template<>
class LunaTraits< OpenThreads::ReadWriteMutex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::ReadWriteMutex* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::ReadWriteMutex* obj);
	typedef OpenThreads::ReadWriteMutex parent_t;
	typedef OpenThreads::ReadWriteMutex base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::ScopedReadLock
template<>
class LunaTraits< OpenThreads::ScopedReadLock > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::ScopedReadLock* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::ScopedReadLock* obj);
	typedef OpenThreads::ScopedReadLock parent_t;
	typedef OpenThreads::ScopedReadLock base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::ScopedWriteLock
template<>
class LunaTraits< OpenThreads::ScopedWriteLock > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::ScopedWriteLock* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::ScopedWriteLock* obj);
	typedef OpenThreads::ScopedWriteLock parent_t;
	typedef OpenThreads::ScopedWriteLock base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::ReentrantMutex
template<>
class LunaTraits< OpenThreads::ReentrantMutex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::ReentrantMutex* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::ReentrantMutex* obj);
	typedef OpenThreads::Mutex parent_t;
	typedef OpenThreads::ReentrantMutex base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::Thread
template<>
class LunaTraits< OpenThreads::Thread > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::Thread* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::Thread* obj);
	typedef OpenThreads::Thread parent_t;
	typedef OpenThreads::Thread base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >
template<>
class LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* obj);
	typedef osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > parent_t;
	typedef osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT >
template<>
class LunaTraits< osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT >* obj);
	typedef osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > parent_t;
	typedef osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >
template<>
class LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* obj);
	typedef osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > parent_t;
	typedef osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE >
template<>
class LunaTraits< osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE >* obj);
	typedef osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > parent_t;
	typedef osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >
template<>
class LunaTraits< osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT >* obj);
	typedef osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > parent_t;
	typedef osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >
template<>
class LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* obj);
	typedef osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > parent_t;
	typedef osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT >
template<>
class LunaTraits< osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT >* obj);
	typedef osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > parent_t;
	typedef osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE >* obj);
	typedef osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > parent_t;
	typedef osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT >* obj);
	typedef osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > parent_t;
	typedef osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT >* obj);
	typedef osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > parent_t;
	typedef osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT >* obj);
	typedef osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > parent_t;
	typedef osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE >* obj);
	typedef osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > parent_t;
	typedef osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE >* obj);
	typedef osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > parent_t;
	typedef osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE >* obj);
	typedef osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > parent_t;
	typedef osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A >
template<>
class LunaTraits< osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A >* obj);
	typedef osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > parent_t;
	typedef osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A >* obj);
	typedef osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > parent_t;
	typedef osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A >* obj);
	typedef osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > parent_t;
	typedef osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >
template<>
class LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* obj);
	typedef osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > parent_t;
	typedef osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >
template<>
class LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* obj);
	typedef osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > parent_t;
	typedef osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BoundingBoxImpl< osg::Vec3f >
template<>
class LunaTraits< osg::BoundingBoxImpl< osg::Vec3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BoundingBoxImpl< osg::Vec3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BoundingBoxImpl< osg::Vec3f >* obj);
	typedef osg::BoundingBoxImpl< osg::Vec3f > parent_t;
	typedef osg::BoundingBoxImpl< osg::Vec3f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BoundingBoxImpl< osg::Vec3d >
template<>
class LunaTraits< osg::BoundingBoxImpl< osg::Vec3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BoundingBoxImpl< osg::Vec3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BoundingBoxImpl< osg::Vec3d >* obj);
	typedef osg::BoundingBoxImpl< osg::Vec3d > parent_t;
	typedef osg::BoundingBoxImpl< osg::Vec3d > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BoundingSphereImpl< osg::Vec3f >
template<>
class LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BoundingSphereImpl< osg::Vec3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BoundingSphereImpl< osg::Vec3f >* obj);
	typedef osg::BoundingSphereImpl< osg::Vec3f > parent_t;
	typedef osg::BoundingSphereImpl< osg::Vec3f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BoundingSphereImpl< osg::Vec3d >
template<>
class LunaTraits< osg::BoundingSphereImpl< osg::Vec3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BoundingSphereImpl< osg::Vec3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BoundingSphereImpl< osg::Vec3d >* obj);
	typedef osg::BoundingSphereImpl< osg::Vec3d > parent_t;
	typedef osg::BoundingSphereImpl< osg::Vec3d > base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osg::GLBufferObject > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osg::GLBufferObject > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osg::GLBufferObject > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osg::GLBufferObject > >* obj);
	typedef std::list< osg::ref_ptr< osg::GLBufferObject > > parent_t;
	typedef std::list< osg::ref_ptr< osg::GLBufferObject > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< double, double >
template<>
class LunaTraits< std::pair< double, double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< double, double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< double, double >* obj);
	typedef std::pair< double, double > parent_t;
	typedef std::pair< double, double > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osg::Node > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::Node > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osg::Node > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osg::Node > >* obj);
	typedef std::vector< osg::ref_ptr< osg::Node > > parent_t;
	typedef std::vector< osg::ref_ptr< osg::Node > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osg::Image > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::Image > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osg::Image > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osg::Image > >* obj);
	typedef std::vector< osg::ref_ptr< osg::Image > > parent_t;
	typedef std::vector< osg::ref_ptr< osg::Image > > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::MixinVector< int >
template<>
class LunaTraits< osg::MixinVector< int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::MixinVector< int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::MixinVector< int >* obj);
	typedef osg::MixinVector< int > parent_t;
	typedef osg::MixinVector< int > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::MixinVector< unsigned char >
template<>
class LunaTraits< osg::MixinVector< unsigned char > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::MixinVector< unsigned char >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::MixinVector< unsigned char >* obj);
	typedef osg::MixinVector< unsigned char > parent_t;
	typedef osg::MixinVector< unsigned char > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::MixinVector< unsigned short >
template<>
class LunaTraits< osg::MixinVector< unsigned short > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::MixinVector< unsigned short >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::MixinVector< unsigned short >* obj);
	typedef osg::MixinVector< unsigned short > parent_t;
	typedef osg::MixinVector< unsigned short > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::MixinVector< unsigned int >
template<>
class LunaTraits< osg::MixinVector< unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::MixinVector< unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::MixinVector< unsigned int >* obj);
	typedef osg::MixinVector< unsigned int > parent_t;
	typedef osg::MixinVector< unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ShaderComponent * >
template<>
class LunaTraits< std::vector< osg::ShaderComponent * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ShaderComponent * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ShaderComponent * >* obj);
	typedef std::vector< osg::ShaderComponent * > parent_t;
	typedef std::vector< osg::ShaderComponent * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ShadowVolumeOccluder >
template<>
class LunaTraits< std::vector< osg::ShadowVolumeOccluder > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ShadowVolumeOccluder >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ShadowVolumeOccluder >* obj);
	typedef std::vector< osg::ShadowVolumeOccluder > parent_t;
	typedef std::vector< osg::ShadowVolumeOccluder > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix2Template< float >
template<>
class LunaTraits< osg::Matrix2Template< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix2Template< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix2Template< float >* obj);
	typedef osg::Matrix2Template< float > parent_t;
	typedef osg::Matrix2Template< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix2x3Template< float >
template<>
class LunaTraits< osg::Matrix2x3Template< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix2x3Template< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix2x3Template< float >* obj);
	typedef osg::Matrix2x3Template< float > parent_t;
	typedef osg::Matrix2x3Template< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix2x4Template< float >
template<>
class LunaTraits< osg::Matrix2x4Template< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix2x4Template< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix2x4Template< float >* obj);
	typedef osg::Matrix2x4Template< float > parent_t;
	typedef osg::Matrix2x4Template< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix3x2Template< float >
template<>
class LunaTraits< osg::Matrix3x2Template< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix3x2Template< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix3x2Template< float >* obj);
	typedef osg::Matrix3x2Template< float > parent_t;
	typedef osg::Matrix3x2Template< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix3x4Template< float >
template<>
class LunaTraits< osg::Matrix3x4Template< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix3x4Template< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix3x4Template< float >* obj);
	typedef osg::Matrix3x4Template< float > parent_t;
	typedef osg::Matrix3x4Template< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix4x2Template< float >
template<>
class LunaTraits< osg::Matrix4x2Template< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix4x2Template< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix4x2Template< float >* obj);
	typedef osg::Matrix4x2Template< float > parent_t;
	typedef osg::Matrix4x2Template< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix4x3Template< float >
template<>
class LunaTraits< osg::Matrix4x3Template< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix4x3Template< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix4x3Template< float >* obj);
	typedef osg::Matrix4x3Template< float > parent_t;
	typedef osg::Matrix4x3Template< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix2Template< double >
template<>
class LunaTraits< osg::Matrix2Template< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix2Template< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix2Template< double >* obj);
	typedef osg::Matrix2Template< double > parent_t;
	typedef osg::Matrix2Template< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix2x3Template< double >
template<>
class LunaTraits< osg::Matrix2x3Template< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix2x3Template< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix2x3Template< double >* obj);
	typedef osg::Matrix2x3Template< double > parent_t;
	typedef osg::Matrix2x3Template< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix2x4Template< double >
template<>
class LunaTraits< osg::Matrix2x4Template< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix2x4Template< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix2x4Template< double >* obj);
	typedef osg::Matrix2x4Template< double > parent_t;
	typedef osg::Matrix2x4Template< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix3x2Template< double >
template<>
class LunaTraits< osg::Matrix3x2Template< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix3x2Template< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix3x2Template< double >* obj);
	typedef osg::Matrix3x2Template< double > parent_t;
	typedef osg::Matrix3x2Template< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix3x4Template< double >
template<>
class LunaTraits< osg::Matrix3x4Template< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix3x4Template< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix3x4Template< double >* obj);
	typedef osg::Matrix3x4Template< double > parent_t;
	typedef osg::Matrix3x4Template< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix4x2Template< double >
template<>
class LunaTraits< osg::Matrix4x2Template< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix4x2Template< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix4x2Template< double >* obj);
	typedef osg::Matrix4x2Template< double > parent_t;
	typedef osg::Matrix4x2Template< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix4x3Template< double >
template<>
class LunaTraits< osg::Matrix4x3Template< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix4x3Template< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix4x3Template< double >* obj);
	typedef osg::Matrix4x3Template< double > parent_t;
	typedef osg::Matrix4x3Template< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< std::string >
template<>
class LunaTraits< osg::TemplateValueObject< std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< std::string >* obj);
	typedef osg::TemplateValueObject< std::string > parent_t;
	typedef osg::TemplateValueObject< std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< bool >
template<>
class LunaTraits< osg::TemplateValueObject< bool > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< bool >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< bool >* obj);
	typedef osg::TemplateValueObject< bool > parent_t;
	typedef osg::TemplateValueObject< bool > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< char >
template<>
class LunaTraits< osg::TemplateValueObject< char > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< char >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< char >* obj);
	typedef osg::TemplateValueObject< char > parent_t;
	typedef osg::TemplateValueObject< char > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< unsigned char >
template<>
class LunaTraits< osg::TemplateValueObject< unsigned char > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< unsigned char >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< unsigned char >* obj);
	typedef osg::TemplateValueObject< unsigned char > parent_t;
	typedef osg::TemplateValueObject< unsigned char > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< short >
template<>
class LunaTraits< osg::TemplateValueObject< short > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< short >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< short >* obj);
	typedef osg::TemplateValueObject< short > parent_t;
	typedef osg::TemplateValueObject< short > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< unsigned short >
template<>
class LunaTraits< osg::TemplateValueObject< unsigned short > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< unsigned short >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< unsigned short >* obj);
	typedef osg::TemplateValueObject< unsigned short > parent_t;
	typedef osg::TemplateValueObject< unsigned short > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< int >
template<>
class LunaTraits< osg::TemplateValueObject< int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< int >* obj);
	typedef osg::TemplateValueObject< int > parent_t;
	typedef osg::TemplateValueObject< int > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< unsigned int >
template<>
class LunaTraits< osg::TemplateValueObject< unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< unsigned int >* obj);
	typedef osg::TemplateValueObject< unsigned int > parent_t;
	typedef osg::TemplateValueObject< unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< float >
template<>
class LunaTraits< osg::TemplateValueObject< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< float >* obj);
	typedef osg::TemplateValueObject< float > parent_t;
	typedef osg::TemplateValueObject< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< double >
template<>
class LunaTraits< osg::TemplateValueObject< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< double >* obj);
	typedef osg::TemplateValueObject< double > parent_t;
	typedef osg::TemplateValueObject< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Vec2f >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Vec2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Vec2f >* obj);
	typedef osg::TemplateValueObject< osg::Vec2f > parent_t;
	typedef osg::TemplateValueObject< osg::Vec2f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Vec3f >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Vec3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Vec3f >* obj);
	typedef osg::TemplateValueObject< osg::Vec3f > parent_t;
	typedef osg::TemplateValueObject< osg::Vec3f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Vec4f >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Vec4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Vec4f >* obj);
	typedef osg::TemplateValueObject< osg::Vec4f > parent_t;
	typedef osg::TemplateValueObject< osg::Vec4f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Vec2d >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Vec2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Vec2d >* obj);
	typedef osg::TemplateValueObject< osg::Vec2d > parent_t;
	typedef osg::TemplateValueObject< osg::Vec2d > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Vec3d >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Vec3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Vec3d >* obj);
	typedef osg::TemplateValueObject< osg::Vec3d > parent_t;
	typedef osg::TemplateValueObject< osg::Vec3d > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Vec4d >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Vec4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Vec4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Vec4d >* obj);
	typedef osg::TemplateValueObject< osg::Vec4d > parent_t;
	typedef osg::TemplateValueObject< osg::Vec4d > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Quat >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Quat > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Quat >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Quat >* obj);
	typedef osg::TemplateValueObject< osg::Quat > parent_t;
	typedef osg::TemplateValueObject< osg::Quat > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Plane >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Plane > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Plane >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Plane >* obj);
	typedef osg::TemplateValueObject< osg::Plane > parent_t;
	typedef osg::TemplateValueObject< osg::Plane > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Matrixf >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Matrixf > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Matrixf >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Matrixf >* obj);
	typedef osg::TemplateValueObject< osg::Matrixf > parent_t;
	typedef osg::TemplateValueObject< osg::Matrixf > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TemplateValueObject< osg::Matrixd >
template<>
class LunaTraits< osg::TemplateValueObject< osg::Matrixd > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TemplateValueObject< osg::Matrixd >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TemplateValueObject< osg::Matrixd >* obj);
	typedef osg::TemplateValueObject< osg::Matrixd > parent_t;
	typedef osg::TemplateValueObject< osg::Matrixd > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::StateSet const * >
template<>
class LunaTraits< std::vector< osg::StateSet const * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::StateSet const * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::StateSet const * >* obj);
	typedef std::vector< osg::StateSet const * > parent_t;
	typedef std::vector< osg::StateSet const * > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::StateAttribute
template<>
class LunaTraits< osg::StateAttribute > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::StateAttribute* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::StateAttribute* obj);
	typedef osg::Referenced parent_t;
	typedef osg::StateAttribute base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AlphaFunc
template<>
class LunaTraits< osg::AlphaFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AlphaFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AlphaFunc* obj);
	typedef osg::Referenced parent_t;
	typedef osg::AlphaFunc base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AnimationPath
template<>
class LunaTraits< osg::AnimationPath > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AnimationPath* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AnimationPath* obj);
	typedef osg::Referenced parent_t;
	typedef osg::AnimationPath base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< double, osg::AnimationPath::ControlPoint >
template<>
class LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< double, osg::AnimationPath::ControlPoint >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< double, osg::AnimationPath::ControlPoint >* obj);
	typedef std::map< double, osg::AnimationPath::ControlPoint > parent_t;
	typedef std::map< double, osg::AnimationPath::ControlPoint > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::NodeCallback
template<>
class LunaTraits< osg::NodeCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodeCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodeCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::NodeCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AnimationPathCallback
template<>
class LunaTraits< osg::AnimationPathCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AnimationPathCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AnimationPathCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::AnimationPathCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ApplicationUsage
template<>
class LunaTraits< osg::ApplicationUsage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ApplicationUsage* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ApplicationUsage* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ApplicationUsage base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, std::string >
template<>
class LunaTraits< std::map< std::string, std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, std::string >* obj);
	typedef std::map< std::string, std::string > parent_t;
	typedef std::map< std::string, std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ApplicationUsageProxy
template<>
class LunaTraits< osg::ApplicationUsageProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ApplicationUsageProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ApplicationUsageProxy* obj);
	typedef osg::ApplicationUsageProxy parent_t;
	typedef osg::ApplicationUsageProxy base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ArgumentParser
template<>
class LunaTraits< osg::ArgumentParser > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ArgumentParser* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ArgumentParser* obj);
	typedef osg::ArgumentParser parent_t;
	typedef osg::ArgumentParser base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, osg::ArgumentParser::ErrorSeverity >
template<>
class LunaTraits< std::map< std::string, osg::ArgumentParser::ErrorSeverity > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, osg::ArgumentParser::ErrorSeverity >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, osg::ArgumentParser::ErrorSeverity >* obj);
	typedef std::map< std::string, osg::ArgumentParser::ErrorSeverity > parent_t;
	typedef std::map< std::string, osg::ArgumentParser::ErrorSeverity > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BufferData
template<>
class LunaTraits< osg::BufferData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BufferData* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BufferData* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BufferData base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Array
template<>
class LunaTraits< osg::Array > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Array* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Array* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Array base_t;
	static luna_ConverterType converters[];
};

// Class: osg::IndexArray
template<>
class LunaTraits< osg::IndexArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::IndexArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::IndexArray* obj);
	typedef osg::Referenced parent_t;
	typedef osg::IndexArray base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ArrayVisitor
template<>
class LunaTraits< osg::ArrayVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ArrayVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ArrayVisitor* obj);
	typedef osg::ArrayVisitor parent_t;
	typedef osg::ArrayVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ConstArrayVisitor
template<>
class LunaTraits< osg::ConstArrayVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ConstArrayVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ConstArrayVisitor* obj);
	typedef osg::ConstArrayVisitor parent_t;
	typedef osg::ConstArrayVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueVisitor
template<>
class LunaTraits< osg::ValueVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueVisitor* obj);
	typedef osg::ValueVisitor parent_t;
	typedef osg::ValueVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ConstValueVisitor
template<>
class LunaTraits< osg::ConstValueVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ConstValueVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ConstValueVisitor* obj);
	typedef osg::ConstValueVisitor parent_t;
	typedef osg::ConstValueVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AttributeDispatch
template<>
class LunaTraits< osg::AttributeDispatch > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AttributeDispatch* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AttributeDispatch* obj);
	typedef osg::Referenced parent_t;
	typedef osg::AttributeDispatch base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ArrayDispatchers
template<>
class LunaTraits< osg::ArrayDispatchers > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ArrayDispatchers* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ArrayDispatchers* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ArrayDispatchers base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AudioSink
template<>
class LunaTraits< osg::AudioSink > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AudioSink* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AudioSink* obj);
	typedef osg::Referenced parent_t;
	typedef osg::AudioSink base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AudioStream
template<>
class LunaTraits< osg::AudioStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AudioStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AudioStream* obj);
	typedef osg::Referenced parent_t;
	typedef osg::AudioStream base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Node
template<>
class LunaTraits< osg::Node > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Node* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Node* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Node base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Group
template<>
class LunaTraits< osg::Group > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Group* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Group* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Group base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Transform
template<>
class LunaTraits< osg::Transform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Transform* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Transform* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Transform base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AutoTransform
template<>
class LunaTraits< osg::AutoTransform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AutoTransform* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AutoTransform* obj);
	typedef osg::Referenced parent_t;
	typedef osg::AutoTransform base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Geode
template<>
class LunaTraits< osg::Geode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Geode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Geode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Geode base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Billboard
template<>
class LunaTraits< osg::Billboard > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Billboard* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Billboard* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Billboard base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Vec3f >
template<>
class LunaTraits< std::vector< osg::Vec3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Vec3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Vec3f >* obj);
	typedef std::vector< osg::Vec3f > parent_t;
	typedef std::vector< osg::Vec3f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BlendColor
template<>
class LunaTraits< osg::BlendColor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BlendColor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BlendColor* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BlendColor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BlendEquation
template<>
class LunaTraits< osg::BlendEquation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BlendEquation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BlendEquation* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BlendEquation base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BlendFunc
template<>
class LunaTraits< osg::BlendFunc > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BlendFunc* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BlendFunc* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BlendFunc base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BufferIndexBinding
template<>
class LunaTraits< osg::BufferIndexBinding > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BufferIndexBinding* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BufferIndexBinding* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BufferIndexBinding base_t;
	static luna_ConverterType converters[];
};

// Class: osg::UniformBufferBinding
template<>
class LunaTraits< osg::UniformBufferBinding > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::UniformBufferBinding* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::UniformBufferBinding* obj);
	typedef osg::Referenced parent_t;
	typedef osg::UniformBufferBinding base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TransformFeedbackBufferBinding
template<>
class LunaTraits< osg::TransformFeedbackBufferBinding > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TransformFeedbackBufferBinding* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TransformFeedbackBufferBinding* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TransformFeedbackBufferBinding base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AtomicCounterBufferBinding
template<>
class LunaTraits< osg::AtomicCounterBufferBinding > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AtomicCounterBufferBinding* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AtomicCounterBufferBinding* obj);
	typedef osg::Referenced parent_t;
	typedef osg::AtomicCounterBufferBinding base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BufferObjectProfile
template<>
class LunaTraits< osg::BufferObjectProfile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BufferObjectProfile* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BufferObjectProfile* obj);
	typedef osg::BufferObjectProfile parent_t;
	typedef osg::BufferObjectProfile base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GLBufferObject
template<>
class LunaTraits< osg::GLBufferObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GLBufferObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GLBufferObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GLBufferObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GLBufferObject::BufferEntry
template<>
class LunaTraits< osg::GLBufferObject::BufferEntry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GLBufferObject::BufferEntry* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GLBufferObject::BufferEntry* obj);
	typedef osg::GLBufferObject::BufferEntry parent_t;
	typedef osg::GLBufferObject::BufferEntry base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GLBufferObject::Extensions
template<>
class LunaTraits< osg::GLBufferObject::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GLBufferObject::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GLBufferObject::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GLBufferObject::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GLBufferObjectSet
template<>
class LunaTraits< osg::GLBufferObjectSet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GLBufferObjectSet* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GLBufferObjectSet* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GLBufferObjectSet base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GLBufferObjectManager
template<>
class LunaTraits< osg::GLBufferObjectManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GLBufferObjectManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GLBufferObjectManager* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GLBufferObjectManager base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BufferObject
template<>
class LunaTraits< osg::BufferObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BufferObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BufferObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BufferObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::VertexBufferObject
template<>
class LunaTraits< osg::VertexBufferObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::VertexBufferObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::VertexBufferObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::VertexBufferObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ElementBufferObject
template<>
class LunaTraits< osg::ElementBufferObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ElementBufferObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ElementBufferObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ElementBufferObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PixelBufferObject
template<>
class LunaTraits< osg::PixelBufferObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PixelBufferObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PixelBufferObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::PixelBufferObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PixelDataBufferObject
template<>
class LunaTraits< osg::PixelDataBufferObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PixelDataBufferObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PixelDataBufferObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::PixelDataBufferObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::UniformBufferObject
template<>
class LunaTraits< osg::UniformBufferObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::UniformBufferObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::UniformBufferObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::UniformBufferObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::AtomicCounterBufferObject
template<>
class LunaTraits< osg::AtomicCounterBufferObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::AtomicCounterBufferObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::AtomicCounterBufferObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::AtomicCounterBufferObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CullSettings
template<>
class LunaTraits< osg::CullSettings > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CullSettings* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CullSettings* obj);
	typedef osg::CullSettings parent_t;
	typedef osg::CullSettings base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Camera
template<>
class LunaTraits< osg::Camera > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Camera* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Camera* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Camera base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >
template<>
class LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* obj);
	typedef std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > parent_t;
	typedef std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Camera::Attachment
template<>
class LunaTraits< osg::Camera::Attachment > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Camera::Attachment* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Camera::Attachment* obj);
	typedef osg::Camera::Attachment parent_t;
	typedef osg::Camera::Attachment base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CameraView
template<>
class LunaTraits< osg::CameraView > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CameraView* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CameraView* obj);
	typedef osg::Referenced parent_t;
	typedef osg::CameraView base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ClampColor
template<>
class LunaTraits< osg::ClampColor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ClampColor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ClampColor* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ClampColor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ClearNode
template<>
class LunaTraits< osg::ClearNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ClearNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ClearNode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ClearNode base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ClipNode
template<>
class LunaTraits< osg::ClipNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ClipNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ClipNode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ClipNode base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osg::ClipPlane > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osg::ClipPlane > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osg::ClipPlane > >* obj);
	typedef std::vector< osg::ref_ptr< osg::ClipPlane > > parent_t;
	typedef std::vector< osg::ref_ptr< osg::ClipPlane > > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ClipPlane
template<>
class LunaTraits< osg::ClipPlane > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ClipPlane* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ClipPlane* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ClipPlane base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Drawable::CullCallback
template<>
class LunaTraits< osg::Drawable::CullCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable::CullCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable::CullCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable::CullCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ClusterCullingCallback
template<>
class LunaTraits< osg::ClusterCullingCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ClusterCullingCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ClusterCullingCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ClusterCullingCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CullStack
template<>
class LunaTraits< osg::CullStack > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CullStack* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CullStack* obj);
	typedef osg::CullSettings parent_t;
	typedef osg::CullStack base_t;
	static luna_ConverterType converters[];
};

// Class: osg::NodeVisitor
template<>
class LunaTraits< osg::NodeVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodeVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodeVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osg::NodeVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CollectOccludersVisitor
template<>
class LunaTraits< osg::CollectOccludersVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CollectOccludersVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CollectOccludersVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osg::CollectOccludersVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::ShadowVolumeOccluder >
template<>
class LunaTraits< std::set< osg::ShadowVolumeOccluder > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::ShadowVolumeOccluder >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::ShadowVolumeOccluder >* obj);
	typedef std::set< osg::ShadowVolumeOccluder > parent_t;
	typedef std::set< osg::ShadowVolumeOccluder > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ColorMask
template<>
class LunaTraits< osg::ColorMask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ColorMask* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ColorMask* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ColorMask base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ColorMatrix
template<>
class LunaTraits< osg::ColorMatrix > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ColorMatrix* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ColorMatrix* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ColorMatrix base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ComputeBoundsVisitor
template<>
class LunaTraits< osg::ComputeBoundsVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ComputeBoundsVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ComputeBoundsVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ComputeBoundsVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ConvexPlanarOccluder
template<>
class LunaTraits< osg::ConvexPlanarOccluder > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ConvexPlanarOccluder* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ConvexPlanarOccluder* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ConvexPlanarOccluder base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ConvexPlanarPolygon >
template<>
class LunaTraits< std::vector< osg::ConvexPlanarPolygon > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ConvexPlanarPolygon >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ConvexPlanarPolygon >* obj);
	typedef std::vector< osg::ConvexPlanarPolygon > parent_t;
	typedef std::vector< osg::ConvexPlanarPolygon > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ConvexPlanarPolygon
template<>
class LunaTraits< osg::ConvexPlanarPolygon > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ConvexPlanarPolygon* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ConvexPlanarPolygon* obj);
	typedef osg::ConvexPlanarPolygon parent_t;
	typedef osg::ConvexPlanarPolygon base_t;
	static luna_ConverterType converters[];
};

// Class: osg::EllipsoidModel
template<>
class LunaTraits< osg::EllipsoidModel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::EllipsoidModel* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::EllipsoidModel* obj);
	typedef osg::Referenced parent_t;
	typedef osg::EllipsoidModel base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CoordinateSystemNode
template<>
class LunaTraits< osg::CoordinateSystemNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CoordinateSystemNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CoordinateSystemNode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::CoordinateSystemNode base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CopyOp
template<>
class LunaTraits< osg::CopyOp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CopyOp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CopyOp* obj);
	typedef osg::CopyOp parent_t;
	typedef osg::CopyOp base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CullFace
template<>
class LunaTraits< osg::CullFace > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CullFace* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CullFace* obj);
	typedef osg::Referenced parent_t;
	typedef osg::CullFace base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CullingSet
template<>
class LunaTraits< osg::CullingSet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CullingSet* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CullingSet* obj);
	typedef osg::Referenced parent_t;
	typedef osg::CullingSet base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >
template<>
class LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* obj);
	typedef std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > parent_t;
	typedef std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::CullingSet::StateFrustumPair >
template<>
class LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::CullingSet::StateFrustumPair >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::CullingSet::StateFrustumPair >* obj);
	typedef std::vector< osg::CullingSet::StateFrustumPair > parent_t;
	typedef std::vector< osg::CullingSet::StateFrustumPair > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CullSettings::ClampProjectionMatrixCallback
template<>
class LunaTraits< osg::CullSettings::ClampProjectionMatrixCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CullSettings::ClampProjectionMatrixCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CullSettings::ClampProjectionMatrixCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::CullSettings::ClampProjectionMatrixCallback base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::CullingSet >
template<>
class LunaTraits< std::vector< osg::CullingSet > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::CullingSet >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::CullingSet >* obj);
	typedef std::vector< osg::CullingSet > parent_t;
	typedef std::vector< osg::CullingSet > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DeleteHandler
template<>
class LunaTraits< osg::DeleteHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DeleteHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DeleteHandler* obj);
	typedef osg::DeleteHandler parent_t;
	typedef osg::DeleteHandler base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< unsigned int, const osg::Referenced * >
template<>
class LunaTraits< std::pair< unsigned int, const osg::Referenced * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< unsigned int, const osg::Referenced * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< unsigned int, const osg::Referenced * >* obj);
	typedef std::pair< unsigned int, const osg::Referenced * > parent_t;
	typedef std::pair< unsigned int, const osg::Referenced * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::DeleteHandler::FrameNumberObjectPair >
template<>
class LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::DeleteHandler::FrameNumberObjectPair >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::DeleteHandler::FrameNumberObjectPair >* obj);
	typedef std::list< osg::DeleteHandler::FrameNumberObjectPair > parent_t;
	typedef std::list< osg::DeleteHandler::FrameNumberObjectPair > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Depth
template<>
class LunaTraits< osg::Depth > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Depth* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Depth* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Depth base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DisplaySettings
template<>
class LunaTraits< osg::DisplaySettings > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DisplaySettings* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DisplaySettings* obj);
	typedef osg::Referenced parent_t;
	typedef osg::DisplaySettings base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Drawable
template<>
class LunaTraits< osg::Drawable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Drawable::ComputeBoundingBoxCallback
template<>
class LunaTraits< osg::Drawable::ComputeBoundingBoxCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable::ComputeBoundingBoxCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable::ComputeBoundingBoxCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable::ComputeBoundingBoxCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DrawPixels
template<>
class LunaTraits< osg::DrawPixels > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DrawPixels* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DrawPixels* obj);
	typedef osg::Referenced parent_t;
	typedef osg::DrawPixels base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Fog
template<>
class LunaTraits< osg::Fog > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Fog* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Fog* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Fog base_t;
	static luna_ConverterType converters[];
};

// Class: osg::FragmentProgram
template<>
class LunaTraits< osg::FragmentProgram > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::FragmentProgram* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::FragmentProgram* obj);
	typedef osg::Referenced parent_t;
	typedef osg::FragmentProgram base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< unsigned int, osg::Vec4f >
template<>
class LunaTraits< std::map< unsigned int, osg::Vec4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< unsigned int, osg::Vec4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< unsigned int, osg::Vec4f >* obj);
	typedef std::map< unsigned int, osg::Vec4f > parent_t;
	typedef std::map< unsigned int, osg::Vec4f > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< unsigned int, osg::Matrixd >
template<>
class LunaTraits< std::map< unsigned int, osg::Matrixd > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< unsigned int, osg::Matrixd >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< unsigned int, osg::Matrixd >* obj);
	typedef std::map< unsigned int, osg::Matrixd > parent_t;
	typedef std::map< unsigned int, osg::Matrixd > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::FragmentProgram::Extensions
template<>
class LunaTraits< osg::FragmentProgram::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::FragmentProgram::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::FragmentProgram::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::FragmentProgram::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::FBOExtensions
template<>
class LunaTraits< osg::FBOExtensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::FBOExtensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::FBOExtensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::FBOExtensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::RenderBuffer
template<>
class LunaTraits< osg::RenderBuffer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::RenderBuffer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::RenderBuffer* obj);
	typedef osg::Referenced parent_t;
	typedef osg::RenderBuffer base_t;
	static luna_ConverterType converters[];
};

// Class: osg::FrameBufferAttachment
template<>
class LunaTraits< osg::FrameBufferAttachment > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::FrameBufferAttachment* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::FrameBufferAttachment* obj);
	typedef osg::FrameBufferAttachment parent_t;
	typedef osg::FrameBufferAttachment base_t;
	static luna_ConverterType converters[];
};

// Class: osg::FrameBufferObject
template<>
class LunaTraits< osg::FrameBufferObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::FrameBufferObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::FrameBufferObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::FrameBufferObject base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >
template<>
class LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* obj);
	typedef std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > parent_t;
	typedef std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::FrameStamp
template<>
class LunaTraits< osg::FrameStamp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::FrameStamp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::FrameStamp* obj);
	typedef osg::Referenced parent_t;
	typedef osg::FrameStamp base_t;
	static luna_ConverterType converters[];
};

// Class: osg::FrontFace
template<>
class LunaTraits< osg::FrontFace > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::FrontFace* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::FrontFace* obj);
	typedef osg::Referenced parent_t;
	typedef osg::FrontFace base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osg::Drawable > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::Drawable > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osg::Drawable > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osg::Drawable > >* obj);
	typedef std::vector< osg::ref_ptr< osg::Drawable > > parent_t;
	typedef std::vector< osg::ref_ptr< osg::Drawable > > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Geometry
template<>
class LunaTraits< osg::Geometry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Geometry* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Geometry* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Geometry base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Geometry::ArrayData >
template<>
class LunaTraits< std::vector< osg::Geometry::ArrayData > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Geometry::ArrayData >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Geometry::ArrayData >* obj);
	typedef std::vector< osg::Geometry::ArrayData > parent_t;
	typedef std::vector< osg::Geometry::ArrayData > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osg::PrimitiveSet > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::PrimitiveSet > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osg::PrimitiveSet > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osg::PrimitiveSet > >* obj);
	typedef std::vector< osg::ref_ptr< osg::PrimitiveSet > > parent_t;
	typedef std::vector< osg::ref_ptr< osg::PrimitiveSet > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Array * >
template<>
class LunaTraits< std::vector< osg::Array * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Array * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Array * >* obj);
	typedef std::vector< osg::Array * > parent_t;
	typedef std::vector< osg::Array * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::DrawElements * >
template<>
class LunaTraits< std::vector< osg::DrawElements * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::DrawElements * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::DrawElements * >* obj);
	typedef std::vector< osg::DrawElements * > parent_t;
	typedef std::vector< osg::DrawElements * > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Geometry::ArrayData
template<>
class LunaTraits< osg::Geometry::ArrayData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Geometry::ArrayData* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Geometry::ArrayData* obj);
	typedef osg::Geometry::ArrayData parent_t;
	typedef osg::Geometry::ArrayData base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GL2Extensions
template<>
class LunaTraits< osg::GL2Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GL2Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GL2Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GL2Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GLBeginEndAdapter
template<>
class LunaTraits< osg::GLBeginEndAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GLBeginEndAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GLBeginEndAdapter* obj);
	typedef osg::GLBeginEndAdapter parent_t;
	typedef osg::GLBeginEndAdapter base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PixelStorageModes
template<>
class LunaTraits< osg::PixelStorageModes > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PixelStorageModes* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PixelStorageModes* obj);
	typedef osg::PixelStorageModes parent_t;
	typedef osg::PixelStorageModes base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsContext
template<>
class LunaTraits< osg::GraphicsContext > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsContext* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsContext* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GraphicsContext base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::GraphicsContext::ScreenSettings >
template<>
class LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::GraphicsContext::ScreenSettings >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::GraphicsContext::ScreenSettings >* obj);
	typedef std::vector< osg::GraphicsContext::ScreenSettings > parent_t;
	typedef std::vector< osg::GraphicsContext::ScreenSettings > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::GraphicsContext * >
template<>
class LunaTraits< std::vector< osg::GraphicsContext * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::GraphicsContext * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::GraphicsContext * >* obj);
	typedef std::vector< osg::GraphicsContext * > parent_t;
	typedef std::vector< osg::GraphicsContext * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osg::Operation > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osg::Operation > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osg::Operation > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osg::Operation > >* obj);
	typedef std::list< osg::ref_ptr< osg::Operation > > parent_t;
	typedef std::list< osg::ref_ptr< osg::Operation > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::Camera * >
template<>
class LunaTraits< std::list< osg::Camera * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::Camera * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::Camera * >* obj);
	typedef std::list< osg::Camera * > parent_t;
	typedef std::list< osg::Camera * > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ClampedLinearCostFunction1D
template<>
class LunaTraits< osg::ClampedLinearCostFunction1D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ClampedLinearCostFunction1D* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ClampedLinearCostFunction1D* obj);
	typedef osg::ClampedLinearCostFunction1D parent_t;
	typedef osg::ClampedLinearCostFunction1D base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GeometryCostEstimator
template<>
class LunaTraits< osg::GeometryCostEstimator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GeometryCostEstimator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GeometryCostEstimator* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GeometryCostEstimator base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TextureCostEstimator
template<>
class LunaTraits< osg::TextureCostEstimator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TextureCostEstimator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TextureCostEstimator* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TextureCostEstimator base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ProgramCostEstimator
template<>
class LunaTraits< osg::ProgramCostEstimator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ProgramCostEstimator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ProgramCostEstimator* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ProgramCostEstimator base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsCostEstimator
template<>
class LunaTraits< osg::GraphicsCostEstimator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsCostEstimator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsCostEstimator* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GraphicsCostEstimator base_t;
	static luna_ConverterType converters[];
};

// Class: osg::OperationThread
template<>
class LunaTraits< osg::OperationThread > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::OperationThread* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::OperationThread* obj);
	typedef osg::Referenced parent_t;
	typedef osg::OperationThread base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsThread
template<>
class LunaTraits< osg::GraphicsThread > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsThread* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsThread* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GraphicsThread base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Operation
template<>
class LunaTraits< osg::Operation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Operation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Operation* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Operation base_t;
	static luna_ConverterType converters[];
};

// Class: osg::GraphicsOperation
template<>
class LunaTraits< osg::GraphicsOperation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::GraphicsOperation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::GraphicsOperation* obj);
	typedef osg::Referenced parent_t;
	typedef osg::GraphicsOperation base_t;
	static luna_ConverterType converters[];
};

// Class: osg::SwapBuffersOperation
template<>
class LunaTraits< osg::SwapBuffersOperation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::SwapBuffersOperation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::SwapBuffersOperation* obj);
	typedef osg::Referenced parent_t;
	typedef osg::SwapBuffersOperation base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BarrierOperation
template<>
class LunaTraits< osg::BarrierOperation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BarrierOperation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BarrierOperation* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BarrierOperation base_t;
	static luna_ConverterType converters[];
};

// Class: osg::RefBlock
template<>
class LunaTraits< osg::RefBlock > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::RefBlock* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::RefBlock* obj);
	typedef osg::Referenced parent_t;
	typedef osg::RefBlock base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ReleaseContext_Block_MakeCurrentOperation
template<>
class LunaTraits< osg::ReleaseContext_Block_MakeCurrentOperation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ReleaseContext_Block_MakeCurrentOperation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ReleaseContext_Block_MakeCurrentOperation* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ReleaseContext_Block_MakeCurrentOperation base_t;
	static luna_ConverterType converters[];
};

// Class: osg::BlockAndFlushOperation
template<>
class LunaTraits< osg::BlockAndFlushOperation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::BlockAndFlushOperation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::BlockAndFlushOperation* obj);
	typedef osg::Referenced parent_t;
	typedef osg::BlockAndFlushOperation base_t;
	static luna_ConverterType converters[];
};

// Class: osg::FlushDeletedGLObjectsOperation
template<>
class LunaTraits< osg::FlushDeletedGLObjectsOperation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::FlushDeletedGLObjectsOperation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::FlushDeletedGLObjectsOperation* obj);
	typedef osg::Referenced parent_t;
	typedef osg::FlushDeletedGLObjectsOperation base_t;
	static luna_ConverterType converters[];
};

// Class: osg::RunOperations
template<>
class LunaTraits< osg::RunOperations > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::RunOperations* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::RunOperations* obj);
	typedef osg::Referenced parent_t;
	typedef osg::RunOperations base_t;
	static luna_ConverterType converters[];
};

// Class: osg::State::DynamicObjectRenderingCompletedCallback
template<>
class LunaTraits< osg::State::DynamicObjectRenderingCompletedCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::State::DynamicObjectRenderingCompletedCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::State::DynamicObjectRenderingCompletedCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::State::DynamicObjectRenderingCompletedCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::EndOfDynamicDrawBlock
template<>
class LunaTraits< osg::EndOfDynamicDrawBlock > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::EndOfDynamicDrawBlock* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::EndOfDynamicDrawBlock* obj);
	typedef OpenThreads::BlockCount parent_t;
	typedef osg::EndOfDynamicDrawBlock base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Hint
template<>
class LunaTraits< osg::Hint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Hint* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Hint* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Hint base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Image
template<>
class LunaTraits< osg::Image > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Image* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Image* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Image base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osg::Image::DimensionsChangedCallback > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::Image::DimensionsChangedCallback > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osg::Image::DimensionsChangedCallback > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osg::Image::DimensionsChangedCallback > >* obj);
	typedef std::vector< osg::ref_ptr< osg::Image::DimensionsChangedCallback > > parent_t;
	typedef std::vector< osg::ref_ptr< osg::Image::DimensionsChangedCallback > > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Image::DataIterator
template<>
class LunaTraits< osg::Image::DataIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Image::DataIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Image::DataIterator* obj);
	typedef osg::Image::DataIterator parent_t;
	typedef osg::Image::DataIterator base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Image::DimensionsChangedCallback
template<>
class LunaTraits< osg::Image::DimensionsChangedCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Image::DimensionsChangedCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Image::DimensionsChangedCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Image::DimensionsChangedCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ImageStream
template<>
class LunaTraits< osg::ImageStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ImageStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ImageStream* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ImageStream base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ImageSequence
template<>
class LunaTraits< osg::ImageSequence > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ImageSequence* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ImageSequence* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ImageSequence base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ImageSequence::ImageData >
template<>
class LunaTraits< std::vector< osg::ImageSequence::ImageData > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ImageSequence::ImageData >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ImageSequence::ImageData >* obj);
	typedef std::vector< osg::ImageSequence::ImageData > parent_t;
	typedef std::vector< osg::ImageSequence::ImageData > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ImageSequence::ImageData
template<>
class LunaTraits< osg::ImageSequence::ImageData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ImageSequence::ImageData* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ImageSequence::ImageData* obj);
	typedef osg::ImageSequence::ImageData parent_t;
	typedef osg::ImageSequence::ImageData base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osg::AudioStream > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::AudioStream > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osg::AudioStream > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osg::AudioStream > >* obj);
	typedef std::vector< osg::ref_ptr< osg::AudioStream > > parent_t;
	typedef std::vector< osg::ref_ptr< osg::AudioStream > > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Shape
template<>
class LunaTraits< osg::Shape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Shape* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Shape* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Shape base_t;
	static luna_ConverterType converters[];
};

// Class: osg::KdTree
template<>
class LunaTraits< osg::KdTree > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::KdTree* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::KdTree* obj);
	typedef osg::Referenced parent_t;
	typedef osg::KdTree base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::KdTree::LineSegmentIntersection >
template<>
class LunaTraits< std::vector< osg::KdTree::LineSegmentIntersection > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::KdTree::LineSegmentIntersection >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::KdTree::LineSegmentIntersection >* obj);
	typedef std::vector< osg::KdTree::LineSegmentIntersection > parent_t;
	typedef std::vector< osg::KdTree::LineSegmentIntersection > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::KdTree::KdNode >
template<>
class LunaTraits< std::vector< osg::KdTree::KdNode > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::KdTree::KdNode >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::KdTree::KdNode >* obj);
	typedef std::vector< osg::KdTree::KdNode > parent_t;
	typedef std::vector< osg::KdTree::KdNode > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::KdTree::Triangle >
template<>
class LunaTraits< std::vector< osg::KdTree::Triangle > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::KdTree::Triangle >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::KdTree::Triangle >* obj);
	typedef std::vector< osg::KdTree::Triangle > parent_t;
	typedef std::vector< osg::KdTree::Triangle > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::KdTree::BuildOptions
template<>
class LunaTraits< osg::KdTree::BuildOptions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::KdTree::BuildOptions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::KdTree::BuildOptions* obj);
	typedef osg::KdTree::BuildOptions parent_t;
	typedef osg::KdTree::BuildOptions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::KdTree::KdNode
template<>
class LunaTraits< osg::KdTree::KdNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::KdTree::KdNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::KdTree::KdNode* obj);
	typedef osg::KdTree::KdNode parent_t;
	typedef osg::KdTree::KdNode base_t;
	static luna_ConverterType converters[];
};

// Class: osg::KdTreeBuilder
template<>
class LunaTraits< osg::KdTreeBuilder > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::KdTreeBuilder* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::KdTreeBuilder* obj);
	typedef osg::Referenced parent_t;
	typedef osg::KdTreeBuilder base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Light
template<>
class LunaTraits< osg::Light > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Light* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Light* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Light base_t;
	static luna_ConverterType converters[];
};

// Class: osg::LightModel
template<>
class LunaTraits< osg::LightModel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::LightModel* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::LightModel* obj);
	typedef osg::Referenced parent_t;
	typedef osg::LightModel base_t;
	static luna_ConverterType converters[];
};

// Class: osg::LightSource
template<>
class LunaTraits< osg::LightSource > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::LightSource* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::LightSource* obj);
	typedef osg::Referenced parent_t;
	typedef osg::LightSource base_t;
	static luna_ConverterType converters[];
};

// Class: osg::LineSegment
template<>
class LunaTraits< osg::LineSegment > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::LineSegment* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::LineSegment* obj);
	typedef osg::Referenced parent_t;
	typedef osg::LineSegment base_t;
	static luna_ConverterType converters[];
};

// Class: osg::LineStipple
template<>
class LunaTraits< osg::LineStipple > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::LineStipple* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::LineStipple* obj);
	typedef osg::Referenced parent_t;
	typedef osg::LineStipple base_t;
	static luna_ConverterType converters[];
};

// Class: osg::LineWidth
template<>
class LunaTraits< osg::LineWidth > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::LineWidth* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::LineWidth* obj);
	typedef osg::Referenced parent_t;
	typedef osg::LineWidth base_t;
	static luna_ConverterType converters[];
};

// Class: osg::LOD
template<>
class LunaTraits< osg::LOD > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::LOD* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::LOD* obj);
	typedef osg::Referenced parent_t;
	typedef osg::LOD base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< float, float >
template<>
class LunaTraits< std::pair< float, float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< float, float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< float, float >* obj);
	typedef std::pair< float, float > parent_t;
	typedef std::pair< float, float > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::LOD::MinMaxPair >
template<>
class LunaTraits< std::vector< osg::LOD::MinMaxPair > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::LOD::MinMaxPair >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::LOD::MinMaxPair >* obj);
	typedef std::vector< osg::LOD::MinMaxPair > parent_t;
	typedef std::vector< osg::LOD::MinMaxPair > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::LogicOp
template<>
class LunaTraits< osg::LogicOp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::LogicOp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::LogicOp* obj);
	typedef osg::Referenced parent_t;
	typedef osg::LogicOp base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Material
template<>
class LunaTraits< osg::Material > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Material* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Material* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Material base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrixd
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

// Class: osg::RefMatrixd
template<>
class LunaTraits< osg::RefMatrixd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::RefMatrixd* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::RefMatrixd* obj);
	typedef osg::Referenced parent_t;
	typedef osg::RefMatrixd base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrixf
template<>
class LunaTraits< osg::Matrixf > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrixf* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrixf* obj);
	typedef osg::Matrixf parent_t;
	typedef osg::Matrixf base_t;
	static luna_ConverterType converters[];
};

// Class: osg::RefMatrixf
template<>
class LunaTraits< osg::RefMatrixf > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::RefMatrixf* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::RefMatrixf* obj);
	typedef osg::Referenced parent_t;
	typedef osg::RefMatrixf base_t;
	static luna_ConverterType converters[];
};

// Class: osg::MatrixTransform
template<>
class LunaTraits< osg::MatrixTransform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::MatrixTransform* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::MatrixTransform* obj);
	typedef osg::Referenced parent_t;
	typedef osg::MatrixTransform base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Multisample
template<>
class LunaTraits< osg::Multisample > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Multisample* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Multisample* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Multisample base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Multisample::Extensions
template<>
class LunaTraits< osg::Multisample::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Multisample::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Multisample::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Multisample::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Group * >
template<>
class LunaTraits< std::vector< osg::Group * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Group * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Group * >* obj);
	typedef std::vector< osg::Group * > parent_t;
	typedef std::vector< osg::Group * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< std::string >
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

// Class: osg::Node::ComputeBoundingSphereCallback
template<>
class LunaTraits< osg::Node::ComputeBoundingSphereCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Node::ComputeBoundingSphereCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Node::ComputeBoundingSphereCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Node::ComputeBoundingSphereCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::NodeTrackerCallback
template<>
class LunaTraits< osg::NodeTrackerCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodeTrackerCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodeTrackerCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::NodeTrackerCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::NodeVisitor::DatabaseRequestHandler
template<>
class LunaTraits< osg::NodeVisitor::DatabaseRequestHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodeVisitor::DatabaseRequestHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodeVisitor::DatabaseRequestHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osg::NodeVisitor::DatabaseRequestHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osg::NodeVisitor::ImageRequestHandler
template<>
class LunaTraits< osg::NodeVisitor::ImageRequestHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodeVisitor::ImageRequestHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodeVisitor::ImageRequestHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osg::NodeVisitor::ImageRequestHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osg::NodeAcceptOp
template<>
class LunaTraits< osg::NodeAcceptOp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodeAcceptOp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodeAcceptOp* obj);
	typedef osg::NodeAcceptOp parent_t;
	typedef osg::NodeAcceptOp base_t;
	static luna_ConverterType converters[];
};

// Class: osg::NotifyHandler
template<>
class LunaTraits< osg::NotifyHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NotifyHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NotifyHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osg::NotifyHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osg::StandardNotifyHandler
template<>
class LunaTraits< osg::StandardNotifyHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::StandardNotifyHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::StandardNotifyHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osg::StandardNotifyHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Observer
template<>
class LunaTraits< osg::Observer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Observer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Observer* obj);
	typedef osg::Observer parent_t;
	typedef osg::Observer base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ObserverSet
template<>
class LunaTraits< osg::ObserverSet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ObserverSet* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ObserverSet* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ObserverSet base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::Observer * >
template<>
class LunaTraits< std::set< osg::Observer * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::Observer * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::Observer * >* obj);
	typedef std::set< osg::Observer * > parent_t;
	typedef std::set< osg::Observer * > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ObserverNodePath
template<>
class LunaTraits< osg::ObserverNodePath > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ObserverNodePath* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ObserverNodePath* obj);
	typedef osg::ObserverNodePath parent_t;
	typedef osg::ObserverNodePath base_t;
	static luna_ConverterType converters[];
};

// Class: osg::OccluderNode
template<>
class LunaTraits< osg::OccluderNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::OccluderNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::OccluderNode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::OccluderNode base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TestResult
template<>
class LunaTraits< osg::TestResult > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TestResult* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TestResult* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TestResult base_t;
	static luna_ConverterType converters[];
};

// Class: osg::QueryGeometry
template<>
class LunaTraits< osg::QueryGeometry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::QueryGeometry* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::QueryGeometry* obj);
	typedef osg::Referenced parent_t;
	typedef osg::QueryGeometry base_t;
	static luna_ConverterType converters[];
};

// Class: osg::OcclusionQueryNode
template<>
class LunaTraits< osg::OcclusionQueryNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::OcclusionQueryNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::OcclusionQueryNode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::OcclusionQueryNode base_t;
	static luna_ConverterType converters[];
};

// Class: osg::RefBlockCount
template<>
class LunaTraits< osg::RefBlockCount > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::RefBlockCount* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::RefBlockCount* obj);
	typedef osg::Referenced parent_t;
	typedef osg::RefBlockCount base_t;
	static luna_ConverterType converters[];
};

// Class: osg::OperationQueue
template<>
class LunaTraits< osg::OperationQueue > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::OperationQueue* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::OperationQueue* obj);
	typedef osg::Referenced parent_t;
	typedef osg::OperationQueue base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::OperationThread * >
template<>
class LunaTraits< std::set< osg::OperationThread * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::OperationThread * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::OperationThread * >* obj);
	typedef std::set< osg::OperationThread * > parent_t;
	typedef std::set< osg::OperationThread * > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PagedLOD
template<>
class LunaTraits< osg::PagedLOD > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PagedLOD* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PagedLOD* obj);
	typedef osg::Referenced parent_t;
	typedef osg::PagedLOD base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::PagedLOD::PerRangeData >
template<>
class LunaTraits< std::vector< osg::PagedLOD::PerRangeData > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::PagedLOD::PerRangeData >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::PagedLOD::PerRangeData >* obj);
	typedef std::vector< osg::PagedLOD::PerRangeData > parent_t;
	typedef std::vector< osg::PagedLOD::PerRangeData > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Plane
template<>
class LunaTraits< osg::Plane > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Plane* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Plane* obj);
	typedef osg::Plane parent_t;
	typedef osg::Plane base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Point
template<>
class LunaTraits< osg::Point > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Point* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Point* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Point base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Point::Extensions
template<>
class LunaTraits< osg::Point::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Point::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Point::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Point::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PointSprite
template<>
class LunaTraits< osg::PointSprite > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PointSprite* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PointSprite* obj);
	typedef osg::Referenced parent_t;
	typedef osg::PointSprite base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PolygonMode
template<>
class LunaTraits< osg::PolygonMode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PolygonMode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PolygonMode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::PolygonMode base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PolygonOffset
template<>
class LunaTraits< osg::PolygonOffset > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PolygonOffset* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PolygonOffset* obj);
	typedef osg::Referenced parent_t;
	typedef osg::PolygonOffset base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PolygonStipple
template<>
class LunaTraits< osg::PolygonStipple > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PolygonStipple* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PolygonStipple* obj);
	typedef osg::Referenced parent_t;
	typedef osg::PolygonStipple base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Polytope
template<>
class LunaTraits< osg::Polytope > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Polytope* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Polytope* obj);
	typedef osg::Polytope parent_t;
	typedef osg::Polytope base_t;
	static luna_ConverterType converters[];
};

// Class: osg::fast_back_stack< unsigned int >
template<>
class LunaTraits< osg::fast_back_stack< unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::fast_back_stack< unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::fast_back_stack< unsigned int >* obj);
	typedef osg::fast_back_stack< unsigned int > parent_t;
	typedef osg::fast_back_stack< unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Polytope::PlaneList
template<>
class LunaTraits< osg::Polytope::PlaneList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Polytope::PlaneList* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Polytope::PlaneList* obj);
	typedef osg::Polytope::PlaneList parent_t;
	typedef osg::Polytope::PlaneList base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PositionAttitudeTransform
template<>
class LunaTraits< osg::PositionAttitudeTransform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PositionAttitudeTransform* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PositionAttitudeTransform* obj);
	typedef osg::Referenced parent_t;
	typedef osg::PositionAttitudeTransform base_t;
	static luna_ConverterType converters[];
};

// Class: osg::PrimitiveSet
template<>
class LunaTraits< osg::PrimitiveSet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::PrimitiveSet* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::PrimitiveSet* obj);
	typedef osg::Referenced parent_t;
	typedef osg::PrimitiveSet base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DrawArrays
template<>
class LunaTraits< osg::DrawArrays > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DrawArrays* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DrawArrays* obj);
	typedef osg::Referenced parent_t;
	typedef osg::DrawArrays base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DrawArrayLengths
template<>
class LunaTraits< osg::DrawArrayLengths > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DrawArrayLengths* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DrawArrayLengths* obj);
	typedef osg::Referenced parent_t;
	typedef osg::DrawArrayLengths base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DrawElements
template<>
class LunaTraits< osg::DrawElements > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DrawElements* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DrawElements* obj);
	typedef osg::Referenced parent_t;
	typedef osg::DrawElements base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DrawElementsUByte
template<>
class LunaTraits< osg::DrawElementsUByte > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DrawElementsUByte* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DrawElementsUByte* obj);
	typedef osg::Referenced parent_t;
	typedef osg::DrawElementsUByte base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DrawElementsUShort
template<>
class LunaTraits< osg::DrawElementsUShort > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DrawElementsUShort* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DrawElementsUShort* obj);
	typedef osg::Referenced parent_t;
	typedef osg::DrawElementsUShort base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DrawElementsUInt
template<>
class LunaTraits< osg::DrawElementsUInt > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DrawElementsUInt* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DrawElementsUInt* obj);
	typedef osg::Referenced parent_t;
	typedef osg::DrawElementsUInt base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Program
template<>
class LunaTraits< osg::Program > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Program* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Program* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Program base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, unsigned int >
template<>
class LunaTraits< std::map< std::string, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, unsigned int >* obj);
	typedef std::map< std::string, unsigned int > parent_t;
	typedef std::map< std::string, unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< unsigned int, osg::Program::ActiveVarInfo >
template<>
class LunaTraits< std::map< unsigned int, osg::Program::ActiveVarInfo > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< unsigned int, osg::Program::ActiveVarInfo >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< unsigned int, osg::Program::ActiveVarInfo >* obj);
	typedef std::map< unsigned int, osg::Program::ActiveVarInfo > parent_t;
	typedef std::map< unsigned int, osg::Program::ActiveVarInfo > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, osg::Program::ActiveVarInfo >
template<>
class LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, osg::Program::ActiveVarInfo >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, osg::Program::ActiveVarInfo >* obj);
	typedef std::map< std::string, osg::Program::ActiveVarInfo > parent_t;
	typedef std::map< std::string, osg::Program::ActiveVarInfo > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, osg::Program::UniformBlockInfo >
template<>
class LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, osg::Program::UniformBlockInfo >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, osg::Program::UniformBlockInfo >* obj);
	typedef std::map< std::string, osg::Program::UniformBlockInfo > parent_t;
	typedef std::map< std::string, osg::Program::UniformBlockInfo > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Program::ActiveVarInfo
template<>
class LunaTraits< osg::Program::ActiveVarInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Program::ActiveVarInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Program::ActiveVarInfo* obj);
	typedef osg::Program::ActiveVarInfo parent_t;
	typedef osg::Program::ActiveVarInfo base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Program::PerContextProgram
template<>
class LunaTraits< osg::Program::PerContextProgram > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Program::PerContextProgram* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Program::PerContextProgram* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Program::PerContextProgram base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Projection
template<>
class LunaTraits< osg::Projection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Projection* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Projection* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Projection base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ProxyNode
template<>
class LunaTraits< osg::ProxyNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ProxyNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ProxyNode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ProxyNode base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Quat
template<>
class LunaTraits< osg::Quat > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Quat* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Quat* obj);
	typedef osg::Quat parent_t;
	typedef osg::Quat base_t;
	static luna_ConverterType converters[];
};

// Class: osg::RenderInfo
template<>
class LunaTraits< osg::RenderInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::RenderInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::RenderInfo* obj);
	typedef osg::RenderInfo parent_t;
	typedef osg::RenderInfo base_t;
	static luna_ConverterType converters[];
};

// Class: osg::SampleMaski
template<>
class LunaTraits< osg::SampleMaski > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::SampleMaski* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::SampleMaski* obj);
	typedef osg::Referenced parent_t;
	typedef osg::SampleMaski base_t;
	static luna_ConverterType converters[];
};

// Class: osg::SampleMaski::Extensions
template<>
class LunaTraits< osg::SampleMaski::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::SampleMaski::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::SampleMaski::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::SampleMaski::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Scissor
template<>
class LunaTraits< osg::Scissor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Scissor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Scissor* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Scissor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Sequence
template<>
class LunaTraits< osg::Sequence > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Sequence* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Sequence* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Sequence base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ShadeModel
template<>
class LunaTraits< osg::ShadeModel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ShadeModel* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ShadeModel* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ShadeModel base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ShaderBinary
template<>
class LunaTraits< osg::ShaderBinary > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ShaderBinary* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ShaderBinary* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ShaderBinary base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Shader
template<>
class LunaTraits< osg::Shader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Shader* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Shader* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Shader base_t;
	static luna_ConverterType converters[];
};

// Class: std::multimap< float, std::string >
template<>
class LunaTraits< std::multimap< float, std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::multimap< float, std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::multimap< float, std::string >* obj);
	typedef std::multimap< float, std::string > parent_t;
	typedef std::multimap< float, std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Shader::PerContextShader
template<>
class LunaTraits< osg::Shader::PerContextShader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Shader::PerContextShader* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Shader::PerContextShader* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Shader::PerContextShader base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ShaderComponent
template<>
class LunaTraits< osg::ShaderComponent > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ShaderComponent* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ShaderComponent* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ShaderComponent base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ShaderAttribute
template<>
class LunaTraits< osg::ShaderAttribute > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ShaderAttribute* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ShaderAttribute* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ShaderAttribute base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ShaderComposer
template<>
class LunaTraits< osg::ShaderComposer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ShaderComposer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ShaderComposer* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ShaderComposer base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< const osg::Shader * >
template<>
class LunaTraits< std::vector< const osg::Shader * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< const osg::Shader * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< const osg::Shader * >* obj);
	typedef std::vector< const osg::Shader * > parent_t;
	typedef std::vector< const osg::Shader * > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ShadowVolumeOccluder
template<>
class LunaTraits< osg::ShadowVolumeOccluder > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ShadowVolumeOccluder* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ShadowVolumeOccluder* obj);
	typedef osg::ShadowVolumeOccluder parent_t;
	typedef osg::ShadowVolumeOccluder base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Polytope >
template<>
class LunaTraits< std::vector< osg::Polytope > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Polytope >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Polytope >* obj);
	typedef std::vector< osg::Polytope > parent_t;
	typedef std::vector< osg::Polytope > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ShapeVisitor
template<>
class LunaTraits< osg::ShapeVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ShapeVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ShapeVisitor* obj);
	typedef osg::ShapeVisitor parent_t;
	typedef osg::ShapeVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ConstShapeVisitor
template<>
class LunaTraits< osg::ConstShapeVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ConstShapeVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ConstShapeVisitor* obj);
	typedef osg::ConstShapeVisitor parent_t;
	typedef osg::ConstShapeVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Sphere
template<>
class LunaTraits< osg::Sphere > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Sphere* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Sphere* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Sphere base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Box
template<>
class LunaTraits< osg::Box > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Box* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Box* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Box base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Cone
template<>
class LunaTraits< osg::Cone > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Cone* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Cone* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Cone base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Cylinder
template<>
class LunaTraits< osg::Cylinder > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Cylinder* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Cylinder* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Cylinder base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Capsule
template<>
class LunaTraits< osg::Capsule > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Capsule* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Capsule* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Capsule base_t;
	static luna_ConverterType converters[];
};

// Class: osg::InfinitePlane
template<>
class LunaTraits< osg::InfinitePlane > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::InfinitePlane* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::InfinitePlane* obj);
	typedef osg::Referenced parent_t;
	typedef osg::InfinitePlane base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TriangleMesh
template<>
class LunaTraits< osg::TriangleMesh > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TriangleMesh* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TriangleMesh* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TriangleMesh base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ConvexHull
template<>
class LunaTraits< osg::ConvexHull > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ConvexHull* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ConvexHull* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ConvexHull base_t;
	static luna_ConverterType converters[];
};

// Class: osg::HeightField
template<>
class LunaTraits< osg::HeightField > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::HeightField* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::HeightField* obj);
	typedef osg::Referenced parent_t;
	typedef osg::HeightField base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< float >
template<>
class LunaTraits< std::vector< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< float >* obj);
	typedef std::vector< float > parent_t;
	typedef std::vector< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::CompositeShape
template<>
class LunaTraits< osg::CompositeShape > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CompositeShape* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CompositeShape* obj);
	typedef osg::Referenced parent_t;
	typedef osg::CompositeShape base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osg::Shape > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osg::Shape > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osg::Shape > >* obj);
	typedef std::vector< osg::ref_ptr< osg::Shape > > parent_t;
	typedef std::vector< osg::ref_ptr< osg::Shape > > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TessellationHints
template<>
class LunaTraits< osg::TessellationHints > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TessellationHints* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TessellationHints* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TessellationHints base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ShapeDrawable
template<>
class LunaTraits< osg::ShapeDrawable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ShapeDrawable* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ShapeDrawable* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ShapeDrawable base_t;
	static luna_ConverterType converters[];
};

// Class: osg::VertexAttribAlias
template<>
class LunaTraits< osg::VertexAttribAlias > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::VertexAttribAlias* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::VertexAttribAlias* obj);
	typedef osg::VertexAttribAlias parent_t;
	typedef osg::VertexAttribAlias base_t;
	static luna_ConverterType converters[];
};

// Class: osg::State
template<>
class LunaTraits< osg::State > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::State* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::State* obj);
	typedef osg::Referenced parent_t;
	typedef osg::State base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< osg::StateAttribute::Type, unsigned int >
template<>
class LunaTraits< std::pair< osg::StateAttribute::Type, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< osg::StateAttribute::Type, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< osg::StateAttribute::Type, unsigned int >* obj);
	typedef std::pair< osg::StateAttribute::Type, unsigned int > parent_t;
	typedef std::pair< osg::StateAttribute::Type, unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::StateSet * >
template<>
class LunaTraits< std::vector< osg::StateSet * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::StateSet * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::StateSet * >* obj);
	typedef std::vector< osg::StateSet * > parent_t;
	typedef std::vector< osg::StateSet * > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::StateAttribute::ModeUsage
template<>
class LunaTraits< osg::StateAttribute::ModeUsage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::StateAttribute::ModeUsage* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::StateAttribute::ModeUsage* obj);
	typedef osg::StateAttribute::ModeUsage parent_t;
	typedef osg::StateAttribute::ModeUsage base_t;
	static luna_ConverterType converters[];
};

// Class: osg::StateSet
template<>
class LunaTraits< osg::StateSet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::StateSet* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::StateSet* obj);
	typedef osg::Referenced parent_t;
	typedef osg::StateSet base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Object * >
template<>
class LunaTraits< std::vector< osg::Object * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Object * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Object * >* obj);
	typedef std::vector< osg::Object * > parent_t;
	typedef std::vector< osg::Object * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< unsigned int, unsigned int >
template<>
class LunaTraits< std::map< unsigned int, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< unsigned int, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< unsigned int, unsigned int >* obj);
	typedef std::map< unsigned int, unsigned int > parent_t;
	typedef std::map< unsigned int, unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >
template<>
class LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* obj);
	typedef std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > parent_t;
	typedef std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >
template<>
class LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* obj);
	typedef std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > parent_t;
	typedef std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::StateSet::ModeList >
template<>
class LunaTraits< std::vector< osg::StateSet::ModeList > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::StateSet::ModeList >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::StateSet::ModeList >* obj);
	typedef std::vector< osg::StateSet::ModeList > parent_t;
	typedef std::vector< osg::StateSet::ModeList > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::StateSet::AttributeList >
template<>
class LunaTraits< std::vector< osg::StateSet::AttributeList > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::StateSet::AttributeList >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::StateSet::AttributeList >* obj);
	typedef std::vector< osg::StateSet::AttributeList > parent_t;
	typedef std::vector< osg::StateSet::AttributeList > base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >
template<>
class LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* obj);
	typedef std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > parent_t;
	typedef std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, osg::StateSet::RefUniformPair >
template<>
class LunaTraits< std::map< std::string, osg::StateSet::RefUniformPair > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, osg::StateSet::RefUniformPair >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, osg::StateSet::RefUniformPair >* obj);
	typedef std::map< std::string, osg::StateSet::RefUniformPair > parent_t;
	typedef std::map< std::string, osg::StateSet::RefUniformPair > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::StateSet::Callback
template<>
class LunaTraits< osg::StateSet::Callback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::StateSet::Callback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::StateSet::Callback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::StateSet::Callback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Stats
template<>
class LunaTraits< osg::Stats > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Stats* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Stats* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Stats base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, double >
template<>
class LunaTraits< std::map< std::string, double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, double >* obj);
	typedef std::map< std::string, double > parent_t;
	typedef std::map< std::string, double > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Stats::AttributeMap >
template<>
class LunaTraits< std::vector< osg::Stats::AttributeMap > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Stats::AttributeMap >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Stats::AttributeMap >* obj);
	typedef std::vector< osg::Stats::AttributeMap > parent_t;
	typedef std::vector< osg::Stats::AttributeMap > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, bool >
template<>
class LunaTraits< std::map< std::string, bool > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, bool >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, bool >* obj);
	typedef std::map< std::string, bool > parent_t;
	typedef std::map< std::string, bool > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Stencil
template<>
class LunaTraits< osg::Stencil > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Stencil* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Stencil* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Stencil base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Stencil::Extensions
template<>
class LunaTraits< osg::Stencil::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Stencil::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Stencil::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Stencil::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::StencilTwoSided
template<>
class LunaTraits< osg::StencilTwoSided > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::StencilTwoSided* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::StencilTwoSided* obj);
	typedef osg::Referenced parent_t;
	typedef osg::StencilTwoSided base_t;
	static luna_ConverterType converters[];
};

// Class: osg::StencilTwoSided::Extensions
template<>
class LunaTraits< osg::StencilTwoSided::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::StencilTwoSided::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::StencilTwoSided::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::StencilTwoSided::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Switch
template<>
class LunaTraits< osg::Switch > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Switch* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Switch* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Switch base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< bool >
template<>
class LunaTraits< std::vector< bool > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< bool >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< bool >* obj);
	typedef std::vector< bool > parent_t;
	typedef std::vector< bool > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TexEnv
template<>
class LunaTraits< osg::TexEnv > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TexEnv* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TexEnv* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TexEnv base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TexEnvCombine
template<>
class LunaTraits< osg::TexEnvCombine > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TexEnvCombine* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TexEnvCombine* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TexEnvCombine base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TexEnvFilter
template<>
class LunaTraits< osg::TexEnvFilter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TexEnvFilter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TexEnvFilter* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TexEnvFilter base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TexGen
template<>
class LunaTraits< osg::TexGen > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TexGen* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TexGen* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TexGen base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TexGenNode
template<>
class LunaTraits< osg::TexGenNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TexGenNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TexGenNode* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TexGenNode base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TexMat
template<>
class LunaTraits< osg::TexMat > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TexMat* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TexMat* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TexMat base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture
template<>
class LunaTraits< osg::Texture > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osg::Texture::TextureObject > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osg::Texture::TextureObject > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osg::Texture::TextureObject > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osg::Texture::TextureObject > >* obj);
	typedef std::list< osg::ref_ptr< osg::Texture::TextureObject > > parent_t;
	typedef std::list< osg::ref_ptr< osg::Texture::TextureObject > > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture::Extensions
template<>
class LunaTraits< osg::Texture::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture::ImageAttachment
template<>
class LunaTraits< osg::Texture::ImageAttachment > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture::ImageAttachment* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture::ImageAttachment* obj);
	typedef osg::Texture::ImageAttachment parent_t;
	typedef osg::Texture::ImageAttachment base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture1D
template<>
class LunaTraits< osg::Texture1D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture1D* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture1D* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture1D base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture1D::SubloadCallback
template<>
class LunaTraits< osg::Texture1D::SubloadCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture1D::SubloadCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture1D::SubloadCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture1D::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture2D
template<>
class LunaTraits< osg::Texture2D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture2D* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture2D* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture2D base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture2D::SubloadCallback
template<>
class LunaTraits< osg::Texture2D::SubloadCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture2D::SubloadCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture2D::SubloadCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture2D::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture2DArray
template<>
class LunaTraits< osg::Texture2DArray > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture2DArray* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture2DArray* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture2DArray base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture2DArray::Extensions
template<>
class LunaTraits< osg::Texture2DArray::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture2DArray::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture2DArray::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture2DArray::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture2DArray::SubloadCallback
template<>
class LunaTraits< osg::Texture2DArray::SubloadCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture2DArray::SubloadCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture2DArray::SubloadCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture2DArray::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture2DMultisample
template<>
class LunaTraits< osg::Texture2DMultisample > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture2DMultisample* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture2DMultisample* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture2DMultisample base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture3D
template<>
class LunaTraits< osg::Texture3D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture3D* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture3D* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture3D base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture3D::Extensions
template<>
class LunaTraits< osg::Texture3D::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture3D::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture3D::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture3D::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Texture3D::SubloadCallback
template<>
class LunaTraits< osg::Texture3D::SubloadCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Texture3D::SubloadCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Texture3D::SubloadCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Texture3D::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TextureCubeMap
template<>
class LunaTraits< osg::TextureCubeMap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TextureCubeMap* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TextureCubeMap* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TextureCubeMap base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TextureCubeMap::Extensions
template<>
class LunaTraits< osg::TextureCubeMap::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TextureCubeMap::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TextureCubeMap::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TextureCubeMap::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TextureCubeMap::SubloadCallback
template<>
class LunaTraits< osg::TextureCubeMap::SubloadCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TextureCubeMap::SubloadCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TextureCubeMap::SubloadCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TextureCubeMap::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TextureRectangle
template<>
class LunaTraits< osg::TextureRectangle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TextureRectangle* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TextureRectangle* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TextureRectangle base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TextureRectangle::SubloadCallback
template<>
class LunaTraits< osg::TextureRectangle::SubloadCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TextureRectangle::SubloadCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TextureRectangle::SubloadCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TextureRectangle::SubloadCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Timer
template<>
class LunaTraits< osg::Timer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Timer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Timer* obj);
	typedef osg::Timer parent_t;
	typedef osg::Timer base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ElapsedTime
template<>
class LunaTraits< osg::ElapsedTime > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ElapsedTime* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ElapsedTime* obj);
	typedef osg::ElapsedTime parent_t;
	typedef osg::ElapsedTime base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TransferFunction
template<>
class LunaTraits< osg::TransferFunction > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TransferFunction* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TransferFunction* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TransferFunction base_t;
	static luna_ConverterType converters[];
};

// Class: osg::TransferFunction1D
template<>
class LunaTraits< osg::TransferFunction1D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::TransferFunction1D* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::TransferFunction1D* obj);
	typedef osg::Referenced parent_t;
	typedef osg::TransferFunction1D base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< float, osg::Vec4f >
template<>
class LunaTraits< std::map< float, osg::Vec4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< float, osg::Vec4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< float, osg::Vec4f >* obj);
	typedef std::map< float, osg::Vec4f > parent_t;
	typedef std::map< float, osg::Vec4f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Uniform
template<>
class LunaTraits< osg::Uniform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Uniform* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Uniform* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Uniform base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Uniform::Callback
template<>
class LunaTraits< osg::Uniform::Callback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Uniform::Callback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Uniform::Callback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Uniform::Callback base_t;
	static luna_ConverterType converters[];
};

// Class: osg::UserDataContainer
template<>
class LunaTraits< osg::UserDataContainer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::UserDataContainer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::UserDataContainer* obj);
	typedef osg::Referenced parent_t;
	typedef osg::UserDataContainer base_t;
	static luna_ConverterType converters[];
};

// Class: osg::DefaultUserDataContainer
template<>
class LunaTraits< osg::DefaultUserDataContainer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::DefaultUserDataContainer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::DefaultUserDataContainer* obj);
	typedef osg::Referenced parent_t;
	typedef osg::DefaultUserDataContainer base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObject
template<>
class LunaTraits< osg::ValueObject > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObject* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObject* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ValueObject base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObject::GetValueVisitor
template<>
class LunaTraits< osg::ValueObject::GetValueVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObject::GetValueVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObject::GetValueVisitor* obj);
	typedef osg::ValueObject::GetValueVisitor parent_t;
	typedef osg::ValueObject::GetValueVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObject::SetValueVisitor
template<>
class LunaTraits< osg::ValueObject::SetValueVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObject::SetValueVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObject::SetValueVisitor* obj);
	typedef osg::ValueObject::SetValueVisitor parent_t;
	typedef osg::ValueObject::SetValueVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< std::string >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< std::string >* obj);
	typedef osg::ValueObjectClassNameTrait< std::string > parent_t;
	typedef osg::ValueObjectClassNameTrait< std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< bool >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< bool > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< bool >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< bool >* obj);
	typedef osg::ValueObjectClassNameTrait< bool > parent_t;
	typedef osg::ValueObjectClassNameTrait< bool > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< char >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< char > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< char >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< char >* obj);
	typedef osg::ValueObjectClassNameTrait< char > parent_t;
	typedef osg::ValueObjectClassNameTrait< char > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< unsigned char >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< unsigned char >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< unsigned char >* obj);
	typedef osg::ValueObjectClassNameTrait< unsigned char > parent_t;
	typedef osg::ValueObjectClassNameTrait< unsigned char > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< short >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< short > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< short >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< short >* obj);
	typedef osg::ValueObjectClassNameTrait< short > parent_t;
	typedef osg::ValueObjectClassNameTrait< short > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< unsigned short >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< unsigned short > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< unsigned short >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< unsigned short >* obj);
	typedef osg::ValueObjectClassNameTrait< unsigned short > parent_t;
	typedef osg::ValueObjectClassNameTrait< unsigned short > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< int >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< int >* obj);
	typedef osg::ValueObjectClassNameTrait< int > parent_t;
	typedef osg::ValueObjectClassNameTrait< int > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< unsigned int >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< unsigned int >* obj);
	typedef osg::ValueObjectClassNameTrait< unsigned int > parent_t;
	typedef osg::ValueObjectClassNameTrait< unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< float >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< float >* obj);
	typedef osg::ValueObjectClassNameTrait< float > parent_t;
	typedef osg::ValueObjectClassNameTrait< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< double >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< double >* obj);
	typedef osg::ValueObjectClassNameTrait< double > parent_t;
	typedef osg::ValueObjectClassNameTrait< double > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Vec2f >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Vec2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec2f >* obj);
	typedef osg::ValueObjectClassNameTrait< Vec2f > parent_t;
	typedef osg::ValueObjectClassNameTrait< Vec2f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Vec3f >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Vec3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec3f >* obj);
	typedef osg::ValueObjectClassNameTrait< Vec3f > parent_t;
	typedef osg::ValueObjectClassNameTrait< Vec3f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Vec4f >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Vec4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec4f >* obj);
	typedef osg::ValueObjectClassNameTrait< Vec4f > parent_t;
	typedef osg::ValueObjectClassNameTrait< Vec4f > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Vec2d >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Vec2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec2d >* obj);
	typedef osg::ValueObjectClassNameTrait< Vec2d > parent_t;
	typedef osg::ValueObjectClassNameTrait< Vec2d > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Vec3d >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec3d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Vec3d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec3d >* obj);
	typedef osg::ValueObjectClassNameTrait< Vec3d > parent_t;
	typedef osg::ValueObjectClassNameTrait< Vec3d > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Vec4d >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Vec4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Vec4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Vec4d >* obj);
	typedef osg::ValueObjectClassNameTrait< Vec4d > parent_t;
	typedef osg::ValueObjectClassNameTrait< Vec4d > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Quat >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Quat > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Quat >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Quat >* obj);
	typedef osg::ValueObjectClassNameTrait< Quat > parent_t;
	typedef osg::ValueObjectClassNameTrait< Quat > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Plane >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Plane > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Plane >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Plane >* obj);
	typedef osg::ValueObjectClassNameTrait< Plane > parent_t;
	typedef osg::ValueObjectClassNameTrait< Plane > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Matrixf >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Matrixf >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Matrixf >* obj);
	typedef osg::ValueObjectClassNameTrait< Matrixf > parent_t;
	typedef osg::ValueObjectClassNameTrait< Matrixf > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ValueObjectClassNameTrait< Matrixd >
template<>
class LunaTraits< osg::ValueObjectClassNameTrait< Matrixd > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ValueObjectClassNameTrait< Matrixd >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ValueObjectClassNameTrait< Matrixd >* obj);
	typedef osg::ValueObjectClassNameTrait< Matrixd > parent_t;
	typedef osg::ValueObjectClassNameTrait< Matrixd > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec2b
template<>
class LunaTraits< osg::Vec2b > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2b* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2b* obj);
	typedef osg::Vec2b parent_t;
	typedef osg::Vec2b base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec2d
template<>
class LunaTraits< osg::Vec2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2d* obj);
	typedef osg::Vec2d parent_t;
	typedef osg::Vec2d base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec2f
template<>
class LunaTraits< osg::Vec2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2f* obj);
	typedef osg::Vec2f parent_t;
	typedef osg::Vec2f base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec2s
template<>
class LunaTraits< osg::Vec2s > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2s* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2s* obj);
	typedef osg::Vec2s parent_t;
	typedef osg::Vec2s base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec3b
template<>
class LunaTraits< osg::Vec3b > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec3b* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec3b* obj);
	typedef osg::Vec3b parent_t;
	typedef osg::Vec3b base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec3d
template<>
class LunaTraits< osg::Vec3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec3d* obj);
	typedef osg::Vec3d parent_t;
	typedef osg::Vec3d base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec3f
template<>
class LunaTraits< osg::Vec3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec3f* obj);
	typedef osg::Vec3f parent_t;
	typedef osg::Vec3f base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec3s
template<>
class LunaTraits< osg::Vec3s > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec3s* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec3s* obj);
	typedef osg::Vec3s parent_t;
	typedef osg::Vec3s base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec4b
template<>
class LunaTraits< osg::Vec4b > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4b* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4b* obj);
	typedef osg::Vec4b parent_t;
	typedef osg::Vec4b base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec4d
template<>
class LunaTraits< osg::Vec4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4d* obj);
	typedef osg::Vec4d parent_t;
	typedef osg::Vec4d base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec4f
template<>
class LunaTraits< osg::Vec4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4f* obj);
	typedef osg::Vec4f parent_t;
	typedef osg::Vec4f base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec4s
template<>
class LunaTraits< osg::Vec4s > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4s* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4s* obj);
	typedef osg::Vec4s parent_t;
	typedef osg::Vec4s base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec4ub
template<>
class LunaTraits< osg::Vec4ub > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4ub* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4ub* obj);
	typedef osg::Vec4ub parent_t;
	typedef osg::Vec4ub base_t;
	static luna_ConverterType converters[];
};

// Class: osg::VertexProgram
template<>
class LunaTraits< osg::VertexProgram > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::VertexProgram* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::VertexProgram* obj);
	typedef osg::Referenced parent_t;
	typedef osg::VertexProgram base_t;
	static luna_ConverterType converters[];
};

// Class: osg::VertexProgram::Extensions
template<>
class LunaTraits< osg::VertexProgram::Extensions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::VertexProgram::Extensions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::VertexProgram::Extensions* obj);
	typedef osg::Referenced parent_t;
	typedef osg::VertexProgram::Extensions base_t;
	static luna_ConverterType converters[];
};

// Class: osg::View
template<>
class LunaTraits< osg::View > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::View* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::View* obj);
	typedef osg::Referenced parent_t;
	typedef osg::View base_t;
	static luna_ConverterType converters[];
};

// Class: osg::View::Slave
template<>
class LunaTraits< osg::View::Slave > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::View::Slave* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::View::Slave* obj);
	typedef osg::View::Slave parent_t;
	typedef osg::View::Slave base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Viewport
template<>
class LunaTraits< osg::Viewport > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Viewport* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Viewport* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Viewport base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ref_ptr< osg::Array >
template<>
class LunaTraits< osg::ref_ptr< osg::Array > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ref_ptr< osg::Array >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ref_ptr< osg::Array >* obj);
	typedef osg::ref_ptr< osg::Array > parent_t;
	typedef osg::ref_ptr< osg::Array > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ref_ptr< osg::Image >
template<>
class LunaTraits< osg::ref_ptr< osg::Image > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ref_ptr< osg::Image >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ref_ptr< osg::Image >* obj);
	typedef osg::ref_ptr< osg::Image > parent_t;
	typedef osg::ref_ptr< osg::Image > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ref_ptr< osg::PrimitiveSet >
template<>
class LunaTraits< osg::ref_ptr< osg::PrimitiveSet > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ref_ptr< osg::PrimitiveSet >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ref_ptr< osg::PrimitiveSet >* obj);
	typedef osg::ref_ptr< osg::PrimitiveSet > parent_t;
	typedef osg::ref_ptr< osg::PrimitiveSet > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::ref_ptr< osg::AnimationPath >
template<>
class LunaTraits< osg::ref_ptr< osg::AnimationPath > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ref_ptr< osg::AnimationPath >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ref_ptr< osg::AnimationPath >* obj);
	typedef osg::ref_ptr< osg::AnimationPath > parent_t;
	typedef osg::ref_ptr< osg::AnimationPath > base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec2Array
template<>
class LunaTraits< osg::Vec2Array > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2Array* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2Array* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Vec2Array base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec3Array
template<>
class LunaTraits< osg::Vec3Array > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec3Array* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec3Array* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Vec3Array base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec4Array
template<>
class LunaTraits< osg::Vec4Array > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4Array* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4Array* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Vec4Array base_t;
	static luna_ConverterType converters[];
};

// Class: osg::MatrixList
template<>
class LunaTraits< osg::MatrixList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::MatrixList* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::MatrixList* obj);
	typedef osg::MatrixList parent_t;
	typedef osg::MatrixList base_t;
	static luna_ConverterType converters[];
};

// Class: osg::NodePath
template<>
class LunaTraits< osg::NodePath > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodePath* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodePath* obj);
	typedef osg::NodePath parent_t;
	typedef osg::NodePath base_t;
	static luna_ConverterType converters[];
};

// Class: osg::NodePathList
template<>
class LunaTraits< osg::NodePathList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodePathList* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodePathList* obj);
	typedef osg::NodePathList parent_t;
	typedef osg::NodePathList base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix3
template<>
class LunaTraits< osg::Matrix3 > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix3* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix3* obj);
	typedef osg::Matrix3 parent_t;
	typedef osg::Matrix3 base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Matrix3d
template<>
class LunaTraits< osg::Matrix3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrix3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrix3d* obj);
	typedef osg::Matrix3d parent_t;
	typedef osg::Matrix3d base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec2dVector
template<>
class LunaTraits< osg::Vec2dVector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2dVector* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2dVector* obj);
	typedef osg::Vec2dVector parent_t;
	typedef osg::Vec2dVector base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec3dVector
template<>
class LunaTraits< osg::Vec3dVector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec3dVector* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec3dVector* obj);
	typedef osg::Vec3dVector parent_t;
	typedef osg::Vec3dVector base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec4dVector
template<>
class LunaTraits< osg::Vec4dVector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4dVector* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4dVector* obj);
	typedef osg::Vec4dVector parent_t;
	typedef osg::Vec4dVector base_t;
	static luna_ConverterType converters[];
};

// Class: std::deque< std::string >
template<>
class LunaTraits< std::deque< std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::deque< std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::deque< std::string >* obj);
	typedef std::deque< std::string > parent_t;
	typedef std::deque< std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< std::string >
template<>
class LunaTraits< std::list< std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< std::string >* obj);
	typedef std::list< std::string > parent_t;
	typedef std::list< std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >* obj);
	typedef std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > parent_t;
	typedef std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ReaderWriter
template<>
class LunaTraits< osgDB::ReaderWriter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ReaderWriter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ReaderWriter* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::ReaderWriter base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::Archive
template<>
class LunaTraits< osgDB::Archive > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::Archive* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::Archive* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::Archive base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::AuthenticationDetails
template<>
class LunaTraits< osgDB::AuthenticationDetails > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::AuthenticationDetails* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::AuthenticationDetails* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::AuthenticationDetails base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::AuthenticationMap
template<>
class LunaTraits< osgDB::AuthenticationMap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::AuthenticationMap* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::AuthenticationMap* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::AuthenticationMap base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::FindFileCallback
template<>
class LunaTraits< osgDB::FindFileCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::FindFileCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::FindFileCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::FindFileCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ReadFileCallback
template<>
class LunaTraits< osgDB::ReadFileCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ReadFileCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ReadFileCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::ReadFileCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::WriteFileCallback
template<>
class LunaTraits< osgDB::WriteFileCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::WriteFileCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::WriteFileCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::WriteFileCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::FileLocationCallback
template<>
class LunaTraits< osgDB::FileLocationCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::FileLocationCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::FileLocationCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::FileLocationCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::DatabasePager
template<>
class LunaTraits< osgDB::DatabasePager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::DatabasePager* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::DatabasePager* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::DatabasePager base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::FileList
template<>
class LunaTraits< osgDB::FileList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::FileList* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::FileList* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::FileList base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< std::string >
template<>
class LunaTraits< std::set< std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< std::string >* obj);
	typedef std::set< std::string > parent_t;
	typedef std::set< std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::DatabaseRevision
template<>
class LunaTraits< osgDB::DatabaseRevision > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::DatabaseRevision* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::DatabaseRevision* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::DatabaseRevision base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::DatabaseRevisions
template<>
class LunaTraits< osgDB::DatabaseRevisions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::DatabaseRevisions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::DatabaseRevisions* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::DatabaseRevisions base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgDB::DatabaseRevision > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgDB::DatabaseRevision > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgDB::DatabaseRevision > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgDB::DatabaseRevision > >* obj);
	typedef std::vector< osg::ref_ptr< osgDB::DatabaseRevision > > parent_t;
	typedef std::vector< osg::ref_ptr< osgDB::DatabaseRevision > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ObjectGLenum
template<>
class LunaTraits< osgDB::ObjectGLenum > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ObjectGLenum* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ObjectGLenum* obj);
	typedef osgDB::ObjectGLenum parent_t;
	typedef osgDB::ObjectGLenum base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ObjectProperty
template<>
class LunaTraits< osgDB::ObjectProperty > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ObjectProperty* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ObjectProperty* obj);
	typedef osgDB::ObjectProperty parent_t;
	typedef osgDB::ObjectProperty base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ObjectMark
template<>
class LunaTraits< osgDB::ObjectMark > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ObjectMark* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ObjectMark* obj);
	typedef osgDB::ObjectMark parent_t;
	typedef osgDB::ObjectMark base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::DotOsgWrapper
template<>
class LunaTraits< osgDB::DotOsgWrapper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::DotOsgWrapper* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::DotOsgWrapper* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::DotOsgWrapper base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::DeprecatedDotOsgWrapperManager
template<>
class LunaTraits< osgDB::DeprecatedDotOsgWrapperManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::DeprecatedDotOsgWrapperManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::DeprecatedDotOsgWrapperManager* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::DeprecatedDotOsgWrapperManager base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::RegisterDotOsgWrapperProxy
template<>
class LunaTraits< osgDB::RegisterDotOsgWrapperProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::RegisterDotOsgWrapperProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::RegisterDotOsgWrapperProxy* obj);
	typedef osgDB::RegisterDotOsgWrapperProxy parent_t;
	typedef osgDB::RegisterDotOsgWrapperProxy base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::DynamicLibrary
template<>
class LunaTraits< osgDB::DynamicLibrary > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::DynamicLibrary* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::DynamicLibrary* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::DynamicLibrary base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ExternalFileWriter
template<>
class LunaTraits< osgDB::ExternalFileWriter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ExternalFileWriter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ExternalFileWriter* obj);
	typedef osgDB::ExternalFileWriter parent_t;
	typedef osgDB::ExternalFileWriter base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >
template<>
class LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >* obj);
	typedef std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > parent_t;
	typedef std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::FileCache
template<>
class LunaTraits< osgDB::FileCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::FileCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::FileCache* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::FileCache base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >* obj);
	typedef std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > parent_t;
	typedef std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::FileNameComparator
template<>
class LunaTraits< osgDB::FileNameComparator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::FileNameComparator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::FileNameComparator* obj);
	typedef osgDB::FileNameComparator parent_t;
	typedef osgDB::FileNameComparator base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::fstream
template<>
class LunaTraits< osgDB::fstream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::fstream* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::fstream* obj);
	typedef osgDB::fstream parent_t;
	typedef osgDB::fstream base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ifstream
template<>
class LunaTraits< osgDB::ifstream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ifstream* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ifstream* obj);
	typedef osgDB::ifstream parent_t;
	typedef osgDB::ifstream base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ofstream
template<>
class LunaTraits< osgDB::ofstream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ofstream* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ofstream* obj);
	typedef osgDB::ofstream parent_t;
	typedef osgDB::ofstream base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::Options
template<>
class LunaTraits< osgDB::Options > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::Options* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::Options* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::Options base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ImageOptions
template<>
class LunaTraits< osgDB::ImageOptions > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ImageOptions* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ImageOptions* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::ImageOptions base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ImagePager
template<>
class LunaTraits< osgDB::ImagePager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ImagePager* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ImagePager* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::ImagePager base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ImageProcessor
template<>
class LunaTraits< osgDB::ImageProcessor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ImageProcessor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ImageProcessor* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::ImageProcessor base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::basic_type_wrapper
template<>
class LunaTraits< osgDB::basic_type_wrapper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::basic_type_wrapper* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::basic_type_wrapper* obj);
	typedef osgDB::basic_type_wrapper parent_t;
	typedef osgDB::basic_type_wrapper base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::Field
template<>
class LunaTraits< osgDB::Field > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::Field* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::Field* obj);
	typedef osgDB::Field parent_t;
	typedef osgDB::Field base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::FieldReader
template<>
class LunaTraits< osgDB::FieldReader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::FieldReader* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::FieldReader* obj);
	typedef osgDB::FieldReader parent_t;
	typedef osgDB::FieldReader base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::FieldReaderIterator
template<>
class LunaTraits< osgDB::FieldReaderIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::FieldReaderIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::FieldReaderIterator* obj);
	typedef osgDB::FieldReaderIterator parent_t;
	typedef osgDB::FieldReaderIterator base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::Input
template<>
class LunaTraits< osgDB::Input > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::Input* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::Input* obj);
	typedef osgDB::FieldReaderIterator parent_t;
	typedef osgDB::Input base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::InputException
template<>
class LunaTraits< osgDB::InputException > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::InputException* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::InputException* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::InputException base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::InputStream
template<>
class LunaTraits< osgDB::InputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::InputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::InputStream* obj);
	typedef osgDB::InputStream parent_t;
	typedef osgDB::InputStream base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< unsigned int, osg::ref_ptr< osg::Array > >
template<>
class LunaTraits< std::map< unsigned int, osg::ref_ptr< osg::Array > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< unsigned int, osg::ref_ptr< osg::Array > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< unsigned int, osg::ref_ptr< osg::Array > >* obj);
	typedef std::map< unsigned int, osg::ref_ptr< osg::Array > > parent_t;
	typedef std::map< unsigned int, osg::ref_ptr< osg::Array > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< unsigned int, osg::ref_ptr< osg::Object > >
template<>
class LunaTraits< std::map< unsigned int, osg::ref_ptr< osg::Object > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< unsigned int, osg::ref_ptr< osg::Object > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< unsigned int, osg::ref_ptr< osg::Object > >* obj);
	typedef std::map< unsigned int, osg::ref_ptr< osg::Object > > parent_t;
	typedef std::map< unsigned int, osg::ref_ptr< osg::Object > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::BaseCompressor
template<>
class LunaTraits< osgDB::BaseCompressor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::BaseCompressor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::BaseCompressor* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::BaseCompressor base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::FinishedObjectReadCallback
template<>
class LunaTraits< osgDB::FinishedObjectReadCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::FinishedObjectReadCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::FinishedObjectReadCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::FinishedObjectReadCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ObjectWrapper
template<>
class LunaTraits< osgDB::ObjectWrapper > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ObjectWrapper* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ObjectWrapper* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::ObjectWrapper base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgDB::BaseSerializer > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgDB::BaseSerializer > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgDB::BaseSerializer > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgDB::BaseSerializer > >* obj);
	typedef std::vector< osg::ref_ptr< osgDB::BaseSerializer > > parent_t;
	typedef std::vector< osg::ref_ptr< osgDB::BaseSerializer > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >* obj);
	typedef std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > parent_t;
	typedef std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::UpdateWrapperVersionProxy
template<>
class LunaTraits< osgDB::UpdateWrapperVersionProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::UpdateWrapperVersionProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::UpdateWrapperVersionProxy* obj);
	typedef osgDB::UpdateWrapperVersionProxy parent_t;
	typedef osgDB::UpdateWrapperVersionProxy base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ObjectWrapperManager
template<>
class LunaTraits< osgDB::ObjectWrapperManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ObjectWrapperManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ObjectWrapperManager* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::ObjectWrapperManager base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >
template<>
class LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >* obj);
	typedef std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > parent_t;
	typedef std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > >
template<>
class LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > >* obj);
	typedef std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > > parent_t;
	typedef std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, osgDB::IntLookup >
template<>
class LunaTraits< std::map< std::string, osgDB::IntLookup > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, osgDB::IntLookup >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, osgDB::IntLookup >* obj);
	typedef std::map< std::string, osgDB::IntLookup > parent_t;
	typedef std::map< std::string, osgDB::IntLookup > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::RegisterWrapperProxy
template<>
class LunaTraits< osgDB::RegisterWrapperProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::RegisterWrapperProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::RegisterWrapperProxy* obj);
	typedef osgDB::RegisterWrapperProxy parent_t;
	typedef osgDB::RegisterWrapperProxy base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::RegisterCompressorProxy
template<>
class LunaTraits< osgDB::RegisterCompressorProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::RegisterCompressorProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::RegisterCompressorProxy* obj);
	typedef osgDB::RegisterCompressorProxy parent_t;
	typedef osgDB::RegisterCompressorProxy base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::Output
template<>
class LunaTraits< osgDB::Output > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::Output* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::Output* obj);
	typedef osgDB::ofstream parent_t;
	typedef osgDB::Output base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::OutputException
template<>
class LunaTraits< osgDB::OutputException > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::OutputException* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::OutputException* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::OutputException base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::OutputStream
template<>
class LunaTraits< osgDB::OutputStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::OutputStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::OutputStream* obj);
	typedef osgDB::OutputStream parent_t;
	typedef osgDB::OutputStream base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< const osg::Array *, unsigned int >
template<>
class LunaTraits< std::map< const osg::Array *, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< const osg::Array *, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< const osg::Array *, unsigned int >* obj);
	typedef std::map< const osg::Array *, unsigned int > parent_t;
	typedef std::map< const osg::Array *, unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< const osg::Object *, unsigned int >
template<>
class LunaTraits< std::map< const osg::Object *, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< const osg::Object *, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< const osg::Object *, unsigned int >* obj);
	typedef std::map< const osg::Object *, unsigned int > parent_t;
	typedef std::map< const osg::Object *, unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ParameterOutput
template<>
class LunaTraits< osgDB::ParameterOutput > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ParameterOutput* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ParameterOutput* obj);
	typedef osgDB::ParameterOutput parent_t;
	typedef osgDB::ParameterOutput base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::ReaderWriterInfo
template<>
class LunaTraits< osgDB::ReaderWriterInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::ReaderWriterInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::ReaderWriterInfo* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::ReaderWriterInfo base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::Registry
template<>
class LunaTraits< osgDB::Registry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::Registry* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::Registry* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::Registry base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgDB::ReaderWriter > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgDB::ReaderWriter > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgDB::ReaderWriter > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgDB::ReaderWriter > >* obj);
	typedef std::vector< osg::ref_ptr< osgDB::ReaderWriter > > parent_t;
	typedef std::vector< osg::ref_ptr< osgDB::ReaderWriter > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgDB::ImageProcessor > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgDB::ImageProcessor > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgDB::ImageProcessor > >* obj);
	typedef std::vector< osg::ref_ptr< osgDB::ImageProcessor > > parent_t;
	typedef std::vector< osg::ref_ptr< osgDB::ImageProcessor > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::PluginFunctionProxy
template<>
class LunaTraits< osgDB::PluginFunctionProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::PluginFunctionProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::PluginFunctionProxy* obj);
	typedef osgDB::PluginFunctionProxy parent_t;
	typedef osgDB::PluginFunctionProxy base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::IntLookup
template<>
class LunaTraits< osgDB::IntLookup > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::IntLookup* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::IntLookup* obj);
	typedef osgDB::IntLookup parent_t;
	typedef osgDB::IntLookup base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< std::string, int >
template<>
class LunaTraits< std::map< std::string, int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< std::string, int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< std::string, int >* obj);
	typedef std::map< std::string, int > parent_t;
	typedef std::map< std::string, int > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< int, std::string >
template<>
class LunaTraits< std::map< int, std::string > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< int, std::string >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< int, std::string >* obj);
	typedef std::map< int, std::string > parent_t;
	typedef std::map< int, std::string > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::UserLookupTableProxy
template<>
class LunaTraits< osgDB::UserLookupTableProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::UserLookupTableProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::UserLookupTableProxy* obj);
	typedef osgDB::UserLookupTableProxy parent_t;
	typedef osgDB::UserLookupTableProxy base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::BaseSerializer
template<>
class LunaTraits< osgDB::BaseSerializer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::BaseSerializer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::BaseSerializer* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::BaseSerializer base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::SharedStateManager
template<>
class LunaTraits< osgDB::SharedStateManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::SharedStateManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::SharedStateManager* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::SharedStateManager base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::OutputIterator
template<>
class LunaTraits< osgDB::OutputIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::OutputIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::OutputIterator* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::OutputIterator base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::InputIterator
template<>
class LunaTraits< osgDB::InputIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::InputIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::InputIterator* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::InputIterator base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::XmlNode
template<>
class LunaTraits< osgDB::XmlNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::XmlNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::XmlNode* obj);
	typedef osg::Referenced parent_t;
	typedef osgDB::XmlNode base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgDB::XmlNode > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgDB::XmlNode > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgDB::XmlNode > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgDB::XmlNode > >* obj);
	typedef std::vector< osg::ref_ptr< osgDB::XmlNode > > parent_t;
	typedef std::vector< osg::ref_ptr< osgDB::XmlNode > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::XmlNode::ControlMap
template<>
class LunaTraits< osgDB::XmlNode::ControlMap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::XmlNode::ControlMap* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::XmlNode::ControlMap* obj);
	typedef osgDB::XmlNode::ControlMap parent_t;
	typedef osgDB::XmlNode::ControlMap base_t;
	static luna_ConverterType converters[];
};

// Class: osgDB::XmlNode::Input
template<>
class LunaTraits< osgDB::XmlNode::Input > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgDB::XmlNode::Input* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgDB::XmlNode::Input* obj);
	typedef osgDB::XmlNode::ControlMap parent_t;
	typedef osgDB::XmlNode::Input base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::GUIEventHandler
template<>
class LunaTraits< osgGA::GUIEventHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::GUIEventHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::CameraManipulator
template<>
class LunaTraits< osgGA::CameraManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::CameraManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::CameraManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::CameraManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::AnimationPathManipulator
template<>
class LunaTraits< osgGA::AnimationPathManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::AnimationPathManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::AnimationPathManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::AnimationPathManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::AnimationPathManipulator::AnimationCompletedCallback
template<>
class LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::AnimationPathManipulator::AnimationCompletedCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::AnimationPathManipulator::AnimationCompletedCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::AnimationPathManipulator::AnimationCompletedCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::CameraViewSwitchManipulator
template<>
class LunaTraits< osgGA::CameraViewSwitchManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::CameraViewSwitchManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::CameraViewSwitchManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::CameraViewSwitchManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osg::CameraView > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osg::CameraView > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osg::CameraView > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osg::CameraView > >* obj);
	typedef std::vector< osg::ref_ptr< osg::CameraView > > parent_t;
	typedef std::vector< osg::ref_ptr< osg::CameraView > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::Device
template<>
class LunaTraits< osgGA::Device > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::Device* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::Device* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::Device base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::DriveManipulator
template<>
class LunaTraits< osgGA::DriveManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::DriveManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::DriveManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::DriveManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::EventQueue
template<>
class LunaTraits< osgGA::EventQueue > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::EventQueue* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::EventQueue* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::EventQueue base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osgGA::GUIEventAdapter > >* obj);
	typedef std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > parent_t;
	typedef std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::EventVisitor
template<>
class LunaTraits< osgGA::EventVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::EventVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::EventVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::EventVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::StandardManipulator
template<>
class LunaTraits< osgGA::StandardManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::StandardManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::StandardManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::StandardManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::FirstPersonManipulator
template<>
class LunaTraits< osgGA::FirstPersonManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::FirstPersonManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::FirstPersonManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::FirstPersonManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::FlightManipulator
template<>
class LunaTraits< osgGA::FlightManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::FlightManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::FlightManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::FlightManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::GUIActionAdapter
template<>
class LunaTraits< osgGA::GUIActionAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIActionAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIActionAdapter* obj);
	typedef osgGA::GUIActionAdapter parent_t;
	typedef osgGA::GUIActionAdapter base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::GUIEventAdapter
template<>
class LunaTraits< osgGA::GUIEventAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventAdapter* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::GUIEventAdapter base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::GUIEventHandlerVisitor
template<>
class LunaTraits< osgGA::GUIEventHandlerVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventHandlerVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventHandlerVisitor* obj);
	typedef osgGA::GUIEventHandlerVisitor parent_t;
	typedef osgGA::GUIEventHandlerVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::KeySwitchMatrixManipulator
template<>
class LunaTraits< osgGA::KeySwitchMatrixManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::KeySwitchMatrixManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::KeySwitchMatrixManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::KeySwitchMatrixManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >
template<>
class LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* obj);
	typedef std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > parent_t;
	typedef std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >
template<>
class LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* obj);
	typedef std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > parent_t;
	typedef std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::OrbitManipulator
template<>
class LunaTraits< osgGA::OrbitManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::OrbitManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::OrbitManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::OrbitManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::TrackballManipulator
template<>
class LunaTraits< osgGA::TrackballManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::TrackballManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::TrackballManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::TrackballManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::MultiTouchTrackballManipulator
template<>
class LunaTraits< osgGA::MultiTouchTrackballManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::MultiTouchTrackballManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::MultiTouchTrackballManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::MultiTouchTrackballManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::NodeTrackerManipulator
template<>
class LunaTraits< osgGA::NodeTrackerManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::NodeTrackerManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::NodeTrackerManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::NodeTrackerManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::SphericalManipulator
template<>
class LunaTraits< osgGA::SphericalManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::SphericalManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::SphericalManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::SphericalManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::StateSetManipulator
template<>
class LunaTraits< osgGA::StateSetManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::StateSetManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::StateSetManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::StateSetManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::TerrainManipulator
template<>
class LunaTraits< osgGA::TerrainManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::TerrainManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::TerrainManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::TerrainManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgGA::UFOManipulator
template<>
class LunaTraits< osgGA::UFOManipulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::UFOManipulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::UFOManipulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::UFOManipulator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::range< float >
template<>
class LunaTraits< osgParticle::range< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::range< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::range< float >* obj);
	typedef osgParticle::range< float > parent_t;
	typedef osgParticle::range< float > base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::range< osg::Vec2f >
template<>
class LunaTraits< osgParticle::range< osg::Vec2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::range< osg::Vec2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::range< osg::Vec2f >* obj);
	typedef osgParticle::range< osg::Vec2f > parent_t;
	typedef osgParticle::range< osg::Vec2f > base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::range< osg::Vec3f >
template<>
class LunaTraits< osgParticle::range< osg::Vec3f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::range< osg::Vec3f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::range< osg::Vec3f >* obj);
	typedef osgParticle::range< osg::Vec3f > parent_t;
	typedef osgParticle::range< osg::Vec3f > base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::range< osg::Vec4f >
template<>
class LunaTraits< osgParticle::range< osg::Vec4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::range< osg::Vec4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::range< osg::Vec4f >* obj);
	typedef osgParticle::range< osg::Vec4f > parent_t;
	typedef osgParticle::range< osg::Vec4f > base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::Operator
template<>
class LunaTraits< osgParticle::Operator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::Operator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::Operator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::Operator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::AccelOperator
template<>
class LunaTraits< osgParticle::AccelOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::AccelOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::AccelOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::AccelOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::AngularAccelOperator
template<>
class LunaTraits< osgParticle::AngularAccelOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::AngularAccelOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::AngularAccelOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::AngularAccelOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::AngularDampingOperator
template<>
class LunaTraits< osgParticle::AngularDampingOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::AngularDampingOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::AngularDampingOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::AngularDampingOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::DomainOperator
template<>
class LunaTraits< osgParticle::DomainOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::DomainOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::DomainOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::DomainOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::BounceOperator
template<>
class LunaTraits< osgParticle::BounceOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::BounceOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::BounceOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::BounceOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::Placer
template<>
class LunaTraits< osgParticle::Placer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::Placer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::Placer* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::Placer base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::CenteredPlacer
template<>
class LunaTraits< osgParticle::CenteredPlacer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::CenteredPlacer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::CenteredPlacer* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::CenteredPlacer base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::BoxPlacer
template<>
class LunaTraits< osgParticle::BoxPlacer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::BoxPlacer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::BoxPlacer* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::BoxPlacer base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::CompositePlacer
template<>
class LunaTraits< osgParticle::CompositePlacer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::CompositePlacer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::CompositePlacer* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::CompositePlacer base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ParticleSystem
template<>
class LunaTraits< osgParticle::ParticleSystem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ParticleSystem* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ParticleSystem* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ParticleSystem base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ConnectedParticleSystem
template<>
class LunaTraits< osgParticle::ConnectedParticleSystem > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ConnectedParticleSystem* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ConnectedParticleSystem* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ConnectedParticleSystem base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::Counter
template<>
class LunaTraits< osgParticle::Counter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::Counter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::Counter* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::Counter base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ConstantRateCounter
template<>
class LunaTraits< osgParticle::ConstantRateCounter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ConstantRateCounter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ConstantRateCounter* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ConstantRateCounter base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::DampingOperator
template<>
class LunaTraits< osgParticle::DampingOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::DampingOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::DampingOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::DampingOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::DomainOperator::Domain
template<>
class LunaTraits< osgParticle::DomainOperator::Domain > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::DomainOperator::Domain* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::DomainOperator::Domain* obj);
	typedef osgParticle::DomainOperator::Domain parent_t;
	typedef osgParticle::DomainOperator::Domain base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ParticleProcessor
template<>
class LunaTraits< osgParticle::ParticleProcessor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ParticleProcessor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ParticleProcessor* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ParticleProcessor base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::Emitter
template<>
class LunaTraits< osgParticle::Emitter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::Emitter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::Emitter* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::Emitter base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ParticleEffect
template<>
class LunaTraits< osgParticle::ParticleEffect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ParticleEffect* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ParticleEffect* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ParticleEffect base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ExplosionDebrisEffect
template<>
class LunaTraits< osgParticle::ExplosionDebrisEffect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ExplosionDebrisEffect* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ExplosionDebrisEffect* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ExplosionDebrisEffect base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ExplosionEffect
template<>
class LunaTraits< osgParticle::ExplosionEffect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ExplosionEffect* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ExplosionEffect* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ExplosionEffect base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ExplosionOperator
template<>
class LunaTraits< osgParticle::ExplosionOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ExplosionOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ExplosionOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ExplosionOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::FireEffect
template<>
class LunaTraits< osgParticle::FireEffect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::FireEffect* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::FireEffect* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::FireEffect base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::FluidFrictionOperator
template<>
class LunaTraits< osgParticle::FluidFrictionOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::FluidFrictionOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::FluidFrictionOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::FluidFrictionOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::Program
template<>
class LunaTraits< osgParticle::Program > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::Program* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::Program* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::Program base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::FluidProgram
template<>
class LunaTraits< osgParticle::FluidProgram > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::FluidProgram* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::FluidProgram* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::FluidProgram base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ForceOperator
template<>
class LunaTraits< osgParticle::ForceOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ForceOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ForceOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ForceOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::Interpolator
template<>
class LunaTraits< osgParticle::Interpolator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::Interpolator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::Interpolator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::Interpolator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::LinearInterpolator
template<>
class LunaTraits< osgParticle::LinearInterpolator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::LinearInterpolator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::LinearInterpolator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::LinearInterpolator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ModularEmitter
template<>
class LunaTraits< osgParticle::ModularEmitter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ModularEmitter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ModularEmitter* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ModularEmitter base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ModularProgram
template<>
class LunaTraits< osgParticle::ModularProgram > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ModularProgram* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ModularProgram* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ModularProgram base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::MultiSegmentPlacer
template<>
class LunaTraits< osgParticle::MultiSegmentPlacer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::MultiSegmentPlacer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::MultiSegmentPlacer* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::MultiSegmentPlacer base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::OrbitOperator
template<>
class LunaTraits< osgParticle::OrbitOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::OrbitOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::OrbitOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::OrbitOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::Particle
template<>
class LunaTraits< osgParticle::Particle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::Particle* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::Particle* obj);
	typedef osgParticle::Particle parent_t;
	typedef osgParticle::Particle base_t;
	static luna_ConverterType converters[];
};

// Class: OpenThreads::ScopedLock< OpenThreads::Mutex >
template<>
class LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static OpenThreads::ScopedLock< OpenThreads::Mutex >* _bind_ctor(lua_State *L);
	static void _bind_dtor(OpenThreads::ScopedLock< OpenThreads::Mutex >* obj);
	typedef OpenThreads::ScopedLock< OpenThreads::Mutex > parent_t;
	typedef OpenThreads::ScopedLock< OpenThreads::Mutex > base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::ParticleSystemUpdater
template<>
class LunaTraits< osgParticle::ParticleSystemUpdater > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::ParticleSystemUpdater* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::ParticleSystemUpdater* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::ParticleSystemUpdater base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::PointPlacer
template<>
class LunaTraits< osgParticle::PointPlacer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::PointPlacer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::PointPlacer* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::PointPlacer base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::PrecipitationEffect
template<>
class LunaTraits< osgParticle::PrecipitationEffect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::PrecipitationEffect* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::PrecipitationEffect* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::PrecipitationEffect base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::PrecipitationEffect::PrecipitationDrawable
template<>
class LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::PrecipitationEffect::PrecipitationDrawable* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::PrecipitationEffect::PrecipitationDrawable base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >
template<>
class LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >* obj);
	typedef std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > parent_t;
	typedef std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell
template<>
class LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* obj);
	typedef osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell parent_t;
	typedef osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime
template<>
class LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime* obj);
	typedef osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime parent_t;
	typedef osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::Shooter
template<>
class LunaTraits< osgParticle::Shooter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::Shooter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::Shooter* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::Shooter base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::RadialShooter
template<>
class LunaTraits< osgParticle::RadialShooter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::RadialShooter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::RadialShooter* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::RadialShooter base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::VariableRateCounter
template<>
class LunaTraits< osgParticle::VariableRateCounter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::VariableRateCounter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::VariableRateCounter* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::VariableRateCounter base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::RandomRateCounter
template<>
class LunaTraits< osgParticle::RandomRateCounter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::RandomRateCounter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::RandomRateCounter* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::RandomRateCounter base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::SectorPlacer
template<>
class LunaTraits< osgParticle::SectorPlacer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::SectorPlacer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::SectorPlacer* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::SectorPlacer base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::SegmentPlacer
template<>
class LunaTraits< osgParticle::SegmentPlacer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::SegmentPlacer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::SegmentPlacer* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::SegmentPlacer base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::SinkOperator
template<>
class LunaTraits< osgParticle::SinkOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::SinkOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::SinkOperator* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::SinkOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::SmokeEffect
template<>
class LunaTraits< osgParticle::SmokeEffect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::SmokeEffect* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::SmokeEffect* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::SmokeEffect base_t;
	static luna_ConverterType converters[];
};

// Class: osgParticle::SmokeTrailEffect
template<>
class LunaTraits< osgParticle::SmokeTrailEffect > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgParticle::SmokeTrailEffect* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgParticle::SmokeTrailEffect* obj);
	typedef osg::Referenced parent_t;
	typedef osgParticle::SmokeTrailEffect base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< unsigned int, unsigned int >
template<>
class LunaTraits< std::pair< unsigned int, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< unsigned int, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< unsigned int, unsigned int >* obj);
	typedef std::pair< unsigned int, unsigned int > parent_t;
	typedef std::pair< unsigned int, unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::TextBase
template<>
class LunaTraits< osgText::TextBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::TextBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::TextBase* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::TextBase base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::Text
template<>
class LunaTraits< osgText::Text > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::Text* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::Text* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::Text base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::FadeText
template<>
class LunaTraits< osgText::FadeText > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::FadeText* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::FadeText* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::FadeText base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::Font
template<>
class LunaTraits< osgText::Font > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::Font* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::Font* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::Font base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgText::GlyphTexture > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgText::GlyphTexture > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgText::GlyphTexture > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgText::GlyphTexture > >* obj);
	typedef std::vector< osg::ref_ptr< osgText::GlyphTexture > > parent_t;
	typedef std::vector< osg::ref_ptr< osgText::GlyphTexture > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::Glyph
template<>
class LunaTraits< osgText::Glyph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::Glyph* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::Glyph* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::Glyph base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::GlyphGeometry
template<>
class LunaTraits< osgText::GlyphGeometry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::GlyphGeometry* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::GlyphGeometry* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::GlyphGeometry base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::Glyph3D
template<>
class LunaTraits< osgText::Glyph3D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::Glyph3D* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::Glyph3D* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::Glyph3D base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::GlyphTexture
template<>
class LunaTraits< osgText::GlyphTexture > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::GlyphTexture* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::GlyphTexture* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::GlyphTexture base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::String
template<>
class LunaTraits< osgText::String > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::String* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::String* obj);
	typedef osgText::String parent_t;
	typedef osgText::String base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::Bevel
template<>
class LunaTraits< osgText::Bevel > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::Bevel* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::Bevel* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::Bevel base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Vec2f >
template<>
class LunaTraits< std::vector< osg::Vec2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Vec2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Vec2f >* obj);
	typedef std::vector< osg::Vec2f > parent_t;
	typedef std::vector< osg::Vec2f > base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::Style
template<>
class LunaTraits< osgText::Style > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::Style* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::Style* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::Style base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >
template<>
class LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >* obj);
	typedef std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > parent_t;
	typedef std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::Text::GlyphQuads
template<>
class LunaTraits< osgText::Text::GlyphQuads > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::Text::GlyphQuads* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::Text::GlyphQuads* obj);
	typedef osgText::Text::GlyphQuads parent_t;
	typedef osgText::Text::GlyphQuads base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osgText::Glyph * >
template<>
class LunaTraits< std::vector< osgText::Glyph * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgText::Glyph * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgText::Glyph * >* obj);
	typedef std::vector< osgText::Glyph * > parent_t;
	typedef std::vector< osgText::Glyph * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Vec4f >
template<>
class LunaTraits< std::vector< osg::Vec4f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Vec4f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Vec4f >* obj);
	typedef std::vector< osg::Vec4f > parent_t;
	typedef std::vector< osg::Vec4f > base_t;
	static luna_ConverterType converters[];
};

// Class: osgText::Text3D
template<>
class LunaTraits< osgText::Text3D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgText::Text3D* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgText::Text3D* obj);
	typedef osg::Referenced parent_t;
	typedef osgText::Text3D base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::CubeMapGenerator
template<>
class LunaTraits< osgUtil::CubeMapGenerator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::CubeMapGenerator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::CubeMapGenerator* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::CubeMapGenerator base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::CullVisitor
template<>
class LunaTraits< osgUtil::CullVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::CullVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::CullVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::CullVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::DelaunayConstraint
template<>
class LunaTraits< osgUtil::DelaunayConstraint > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::DelaunayConstraint* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::DelaunayConstraint* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::DelaunayConstraint base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::DelaunayTriangulator
template<>
class LunaTraits< osgUtil::DelaunayTriangulator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::DelaunayTriangulator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::DelaunayTriangulator* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::DelaunayTriangulator base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > >* obj);
	typedef std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > > parent_t;
	typedef std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::DisplayRequirementsVisitor
template<>
class LunaTraits< osgUtil::DisplayRequirementsVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::DisplayRequirementsVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::DisplayRequirementsVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::DisplayRequirementsVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::DrawElementTypeSimplifier
template<>
class LunaTraits< osgUtil::DrawElementTypeSimplifier > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::DrawElementTypeSimplifier* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::DrawElementTypeSimplifier* obj);
	typedef osgUtil::DrawElementTypeSimplifier parent_t;
	typedef osgUtil::DrawElementTypeSimplifier base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::DrawElementTypeSimplifierVisitor
template<>
class LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::DrawElementTypeSimplifierVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::DrawElementTypeSimplifierVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::DrawElementTypeSimplifierVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::dereference_less
template<>
class LunaTraits< osgUtil::dereference_less > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::dereference_less* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::dereference_less* obj);
	typedef osgUtil::dereference_less parent_t;
	typedef osgUtil::dereference_less base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::dereference_clear
template<>
class LunaTraits< osgUtil::dereference_clear > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::dereference_clear* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::dereference_clear* obj);
	typedef osgUtil::dereference_clear parent_t;
	typedef osgUtil::dereference_clear base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::EdgeCollector
template<>
class LunaTraits< osgUtil::EdgeCollector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::EdgeCollector* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::EdgeCollector* obj);
	typedef osgUtil::EdgeCollector parent_t;
	typedef osgUtil::EdgeCollector base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osg::UIntArray > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osg::UIntArray > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osg::UIntArray > >* obj);
	typedef std::list< osg::ref_ptr< osg::UIntArray > > parent_t;
	typedef std::list< osg::ref_ptr< osg::UIntArray > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less >
template<>
class LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less >* obj);
	typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less > parent_t;
	typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less > base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > >* obj);
	typedef std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > > parent_t;
	typedef std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less >
template<>
class LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less >* obj);
	typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less > parent_t;
	typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > >* obj);
	typedef std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > > parent_t;
	typedef std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* obj);
	typedef std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > parent_t;
	typedef std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >
template<>
class LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* obj);
	typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > parent_t;
	typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less >
template<>
class LunaTraits< std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less >* obj);
	typedef std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less > parent_t;
	typedef std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::EdgeCollector::Edge
template<>
class LunaTraits< osgUtil::EdgeCollector::Edge > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::EdgeCollector::Edge* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::EdgeCollector::Edge* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::EdgeCollector::Edge base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::GLObjectsVisitor
template<>
class LunaTraits< osgUtil::GLObjectsVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::GLObjectsVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::GLObjectsVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::GLObjectsVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::GLObjectsOperation
template<>
class LunaTraits< osgUtil::GLObjectsOperation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::GLObjectsOperation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::GLObjectsOperation* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::GLObjectsOperation base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::HalfWayMapGenerator
template<>
class LunaTraits< osgUtil::HalfWayMapGenerator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::HalfWayMapGenerator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::HalfWayMapGenerator* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::HalfWayMapGenerator base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::HighlightMapGenerator
template<>
class LunaTraits< osgUtil::HighlightMapGenerator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::HighlightMapGenerator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::HighlightMapGenerator* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::HighlightMapGenerator base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::StateToCompile
template<>
class LunaTraits< osgUtil::StateToCompile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::StateToCompile* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::StateToCompile* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::StateToCompile base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::Drawable * >
template<>
class LunaTraits< std::set< osg::Drawable * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::Drawable * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::Drawable * >* obj);
	typedef std::set< osg::Drawable * > parent_t;
	typedef std::set< osg::Drawable * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::StateSet * >
template<>
class LunaTraits< std::set< osg::StateSet * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::StateSet * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::StateSet * >* obj);
	typedef std::set< osg::StateSet * > parent_t;
	typedef std::set< osg::StateSet * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::Texture * >
template<>
class LunaTraits< std::set< osg::Texture * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::Texture * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::Texture * >* obj);
	typedef std::set< osg::Texture * > parent_t;
	typedef std::set< osg::Texture * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::Program * >
template<>
class LunaTraits< std::set< osg::Program * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::Program * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::Program * >* obj);
	typedef std::set< osg::Program * > parent_t;
	typedef std::set< osg::Program * > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IncrementalCompileOperation
template<>
class LunaTraits< osgUtil::IncrementalCompileOperation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IncrementalCompileOperation* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IncrementalCompileOperation* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IncrementalCompileOperation base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::GraphicsContext * >
template<>
class LunaTraits< std::set< osg::GraphicsContext * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::GraphicsContext * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::GraphicsContext * >* obj);
	typedef std::set< osg::GraphicsContext * > parent_t;
	typedef std::set< osg::GraphicsContext * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > >* obj);
	typedef std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > > parent_t;
	typedef std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IncrementalCompileOperation::CompileCompletedCallback
template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileCompletedCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IncrementalCompileOperation::CompileCompletedCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileCompletedCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IncrementalCompileOperation::CompileCompletedCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IncrementalCompileOperation::CompileOp
template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileOp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IncrementalCompileOperation::CompileOp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileOp* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IncrementalCompileOperation::CompileOp base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IncrementalCompileOperation::CompileDrawableOp
template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileDrawableOp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IncrementalCompileOperation::CompileDrawableOp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileDrawableOp* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IncrementalCompileOperation::CompileDrawableOp base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IncrementalCompileOperation::CompileInfo
template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IncrementalCompileOperation::CompileInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileInfo* obj);
	typedef osg::RenderInfo parent_t;
	typedef osgUtil::IncrementalCompileOperation::CompileInfo base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IncrementalCompileOperation::CompileList
template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IncrementalCompileOperation::CompileList* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileList* obj);
	typedef osgUtil::IncrementalCompileOperation::CompileList parent_t;
	typedef osgUtil::IncrementalCompileOperation::CompileList base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > >* obj);
	typedef std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > > parent_t;
	typedef std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IncrementalCompileOperation::CompileProgramOp
template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileProgramOp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IncrementalCompileOperation::CompileProgramOp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileProgramOp* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IncrementalCompileOperation::CompileProgramOp base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IncrementalCompileOperation::CompileSet
template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileSet > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IncrementalCompileOperation::CompileSet* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileSet* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IncrementalCompileOperation::CompileSet base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >
template<>
class LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* obj);
	typedef std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > parent_t;
	typedef std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IncrementalCompileOperation::CompileTextureOp
template<>
class LunaTraits< osgUtil::IncrementalCompileOperation::CompileTextureOp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IncrementalCompileOperation::CompileTextureOp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IncrementalCompileOperation::CompileTextureOp* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IncrementalCompileOperation::CompileTextureOp base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::Intersector
template<>
class LunaTraits< osgUtil::Intersector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::Intersector* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::Intersector* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::Intersector base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IntersectorGroup
template<>
class LunaTraits< osgUtil::IntersectorGroup > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IntersectorGroup* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IntersectorGroup* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IntersectorGroup base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgUtil::Intersector > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::Intersector > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgUtil::Intersector > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::Intersector > >* obj);
	typedef std::vector< osg::ref_ptr< osgUtil::Intersector > > parent_t;
	typedef std::vector< osg::ref_ptr< osgUtil::Intersector > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IntersectionVisitor
template<>
class LunaTraits< osgUtil::IntersectionVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IntersectionVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IntersectionVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IntersectionVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::Hit
template<>
class LunaTraits< osgUtil::Hit > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::Hit* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::Hit* obj);
	typedef osgUtil::Hit parent_t;
	typedef osgUtil::Hit base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< int >
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

// Class: osgUtil::IntersectVisitor
template<>
class LunaTraits< osgUtil::IntersectVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IntersectVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IntersectVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IntersectVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::PickVisitor
template<>
class LunaTraits< osgUtil::PickVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::PickVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::PickVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::PickVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::LineSegmentIntersector
template<>
class LunaTraits< osgUtil::LineSegmentIntersector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::LineSegmentIntersector* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::LineSegmentIntersector* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::LineSegmentIntersector base_t;
	static luna_ConverterType converters[];
};

// Class: std::multiset< osgUtil::LineSegmentIntersector::Intersection >
template<>
class LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::multiset< osgUtil::LineSegmentIntersector::Intersection >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::multiset< osgUtil::LineSegmentIntersector::Intersection >* obj);
	typedef std::multiset< osgUtil::LineSegmentIntersector::Intersection > parent_t;
	typedef std::multiset< osgUtil::LineSegmentIntersector::Intersection > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::LineSegmentIntersector::Intersection
template<>
class LunaTraits< osgUtil::LineSegmentIntersector::Intersection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::LineSegmentIntersector::Intersection* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::LineSegmentIntersector::Intersection* obj);
	typedef osgUtil::LineSegmentIntersector::Intersection parent_t;
	typedef osgUtil::LineSegmentIntersector::Intersection base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::BaseOptimizerVisitor
template<>
class LunaTraits< osgUtil::BaseOptimizerVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::BaseOptimizerVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::BaseOptimizerVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::BaseOptimizerVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::GeometryCollector
template<>
class LunaTraits< osgUtil::GeometryCollector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::GeometryCollector* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::GeometryCollector* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::GeometryCollector base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::Geometry * >
template<>
class LunaTraits< std::set< osg::Geometry * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::Geometry * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::Geometry * >* obj);
	typedef std::set< osg::Geometry * > parent_t;
	typedef std::set< osg::Geometry * > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::IndexMeshVisitor
template<>
class LunaTraits< osgUtil::IndexMeshVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::IndexMeshVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::IndexMeshVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::IndexMeshVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::VertexCacheVisitor
template<>
class LunaTraits< osgUtil::VertexCacheVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::VertexCacheVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::VertexCacheVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::VertexCacheVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::VertexCacheMissVisitor
template<>
class LunaTraits< osgUtil::VertexCacheMissVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::VertexCacheMissVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::VertexCacheMissVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::VertexCacheMissVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::VertexAccessOrderVisitor
template<>
class LunaTraits< osgUtil::VertexAccessOrderVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::VertexAccessOrderVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::VertexAccessOrderVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::VertexAccessOrderVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::AddRangeOperator
template<>
class LunaTraits< osgUtil::AddRangeOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::AddRangeOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::AddRangeOperator* obj);
	typedef osgUtil::AddRangeOperator parent_t;
	typedef osgUtil::AddRangeOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::MultiplyRangeOperator
template<>
class LunaTraits< osgUtil::MultiplyRangeOperator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::MultiplyRangeOperator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::MultiplyRangeOperator* obj);
	typedef osgUtil::MultiplyRangeOperator parent_t;
	typedef osgUtil::MultiplyRangeOperator base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::Optimizer
template<>
class LunaTraits< osgUtil::Optimizer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::Optimizer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::Optimizer* obj);
	typedef osgUtil::Optimizer parent_t;
	typedef osgUtil::Optimizer base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::PerlinNoise
template<>
class LunaTraits< osgUtil::PerlinNoise > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::PerlinNoise* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::PerlinNoise* obj);
	typedef osgUtil::PerlinNoise parent_t;
	typedef osgUtil::PerlinNoise base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::PlaneIntersector
template<>
class LunaTraits< osgUtil::PlaneIntersector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::PlaneIntersector* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::PlaneIntersector* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::PlaneIntersector base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osgUtil::PlaneIntersector::Intersection >
template<>
class LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgUtil::PlaneIntersector::Intersection >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgUtil::PlaneIntersector::Intersection >* obj);
	typedef std::vector< osgUtil::PlaneIntersector::Intersection > parent_t;
	typedef std::vector< osgUtil::PlaneIntersector::Intersection > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::PlaneIntersector::Intersection
template<>
class LunaTraits< osgUtil::PlaneIntersector::Intersection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::PlaneIntersector::Intersection* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::PlaneIntersector::Intersection* obj);
	typedef osgUtil::PlaneIntersector::Intersection parent_t;
	typedef osgUtil::PlaneIntersector::Intersection base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::PolytopeIntersector
template<>
class LunaTraits< osgUtil::PolytopeIntersector > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::PolytopeIntersector* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::PolytopeIntersector* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::PolytopeIntersector base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osgUtil::PolytopeIntersector::Intersection >
template<>
class LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osgUtil::PolytopeIntersector::Intersection >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osgUtil::PolytopeIntersector::Intersection >* obj);
	typedef std::set< osgUtil::PolytopeIntersector::Intersection > parent_t;
	typedef std::set< osgUtil::PolytopeIntersector::Intersection > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::PolytopeIntersector::Intersection
template<>
class LunaTraits< osgUtil::PolytopeIntersector::Intersection > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::PolytopeIntersector::Intersection* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::PolytopeIntersector::Intersection* obj);
	typedef osgUtil::PolytopeIntersector::Intersection parent_t;
	typedef osgUtil::PolytopeIntersector::Intersection base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::PositionalStateContainer
template<>
class LunaTraits< osgUtil::PositionalStateContainer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::PositionalStateContainer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::PositionalStateContainer* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::PositionalStateContainer base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >
template<>
class LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* obj);
	typedef std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > parent_t;
	typedef std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >
template<>
class LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* obj);
	typedef std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > parent_t;
	typedef std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >
template<>
class LunaTraits< std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList >* obj);
	typedef std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > parent_t;
	typedef std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::PrintVisitor
template<>
class LunaTraits< osgUtil::PrintVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::PrintVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::PrintVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::PrintVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::ReflectionMapGenerator
template<>
class LunaTraits< osgUtil::ReflectionMapGenerator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::ReflectionMapGenerator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::ReflectionMapGenerator* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::ReflectionMapGenerator base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::RenderBin
template<>
class LunaTraits< osgUtil::RenderBin > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::RenderBin* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::RenderBin* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::RenderBin base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osgUtil::RenderLeaf * >
template<>
class LunaTraits< std::vector< osgUtil::RenderLeaf * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgUtil::RenderLeaf * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgUtil::RenderLeaf * >* obj);
	typedef std::vector< osgUtil::RenderLeaf * > parent_t;
	typedef std::vector< osgUtil::RenderLeaf * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osgUtil::StateGraph * >
template<>
class LunaTraits< std::vector< osgUtil::StateGraph * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgUtil::StateGraph * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgUtil::StateGraph * >* obj);
	typedef std::vector< osgUtil::StateGraph * > parent_t;
	typedef std::vector< osgUtil::StateGraph * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< int, osg::ref_ptr< osgUtil::RenderBin > >
template<>
class LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* obj);
	typedef std::map< int, osg::ref_ptr< osgUtil::RenderBin > > parent_t;
	typedef std::map< int, osg::ref_ptr< osgUtil::RenderBin > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::RenderBin::DrawCallback
template<>
class LunaTraits< osgUtil::RenderBin::DrawCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::RenderBin::DrawCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::RenderBin::DrawCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::RenderBin::DrawCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::RenderLeaf
template<>
class LunaTraits< osgUtil::RenderLeaf > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::RenderLeaf* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::RenderLeaf* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::RenderLeaf base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::RenderStage
template<>
class LunaTraits< osgUtil::RenderStage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::RenderStage* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::RenderStage* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::RenderStage base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::RenderStage::Attachment
template<>
class LunaTraits< osgUtil::RenderStage::Attachment > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::RenderStage::Attachment* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::RenderStage::Attachment* obj);
	typedef osgUtil::RenderStage::Attachment parent_t;
	typedef osgUtil::RenderStage::Attachment base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::SceneGraphBuilder
template<>
class LunaTraits< osgUtil::SceneGraphBuilder > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::SceneGraphBuilder* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::SceneGraphBuilder* obj);
	typedef osgUtil::SceneGraphBuilder parent_t;
	typedef osgUtil::SceneGraphBuilder base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::SceneView
template<>
class LunaTraits< osgUtil::SceneView > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::SceneView* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::SceneView* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::SceneView base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::SceneView::ComputeStereoMatricesCallback
template<>
class LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::SceneView::ComputeStereoMatricesCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::SceneView::ComputeStereoMatricesCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::SceneView::ComputeStereoMatricesCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::ShaderGenCache
template<>
class LunaTraits< osgUtil::ShaderGenCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::ShaderGenCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::ShaderGenCache* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::ShaderGenCache base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< int, osg::ref_ptr< osg::StateSet > >
template<>
class LunaTraits< std::map< int, osg::ref_ptr< osg::StateSet > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< int, osg::ref_ptr< osg::StateSet > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< int, osg::ref_ptr< osg::StateSet > >* obj);
	typedef std::map< int, osg::ref_ptr< osg::StateSet > > parent_t;
	typedef std::map< int, osg::ref_ptr< osg::StateSet > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::ShaderGenVisitor
template<>
class LunaTraits< osgUtil::ShaderGenVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::ShaderGenVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::ShaderGenVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::ShaderGenVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::Simplifier
template<>
class LunaTraits< osgUtil::Simplifier > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::Simplifier* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::Simplifier* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::Simplifier base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::Simplifier::ContinueSimplificationCallback
template<>
class LunaTraits< osgUtil::Simplifier::ContinueSimplificationCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::Simplifier::ContinueSimplificationCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::Simplifier::ContinueSimplificationCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::Simplifier::ContinueSimplificationCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::SmoothingVisitor
template<>
class LunaTraits< osgUtil::SmoothingVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::SmoothingVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::SmoothingVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::SmoothingVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::StateGraph
template<>
class LunaTraits< osgUtil::StateGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::StateGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::StateGraph* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::StateGraph base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >
template<>
class LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* obj);
	typedef std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > parent_t;
	typedef std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::ref_ptr< osgUtil::RenderLeaf > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::RenderLeaf > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgUtil::RenderLeaf > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::RenderLeaf > >* obj);
	typedef std::vector< osg::ref_ptr< osgUtil::RenderLeaf > > parent_t;
	typedef std::vector< osg::ref_ptr< osgUtil::RenderLeaf > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::Statistics
template<>
class LunaTraits< osgUtil::Statistics > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::Statistics* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::Statistics* obj);
	typedef osgUtil::Statistics parent_t;
	typedef osgUtil::Statistics base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< unsigned int, osgUtil::Statistics::PrimitivePair >
template<>
class LunaTraits< std::map< unsigned int, osgUtil::Statistics::PrimitivePair > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< unsigned int, osgUtil::Statistics::PrimitivePair >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< unsigned int, osgUtil::Statistics::PrimitivePair >* obj);
	typedef std::map< unsigned int, osgUtil::Statistics::PrimitivePair > parent_t;
	typedef std::map< unsigned int, osgUtil::Statistics::PrimitivePair > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::StatsVisitor
template<>
class LunaTraits< osgUtil::StatsVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::StatsVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::StatsVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::StatsVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: std::set< osg::Node * >
template<>
class LunaTraits< std::set< osg::Node * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< osg::Node * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< osg::Node * >* obj);
	typedef std::set< osg::Node * > parent_t;
	typedef std::set< osg::Node * > base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::TangentSpaceGenerator
template<>
class LunaTraits< osgUtil::TangentSpaceGenerator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::TangentSpaceGenerator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::TangentSpaceGenerator* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::TangentSpaceGenerator base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::Tessellator
template<>
class LunaTraits< osgUtil::Tessellator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::Tessellator* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::Tessellator* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::Tessellator base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::TransformCallback
template<>
class LunaTraits< osgUtil::TransformCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::TransformCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::TransformCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::TransformCallback base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::TriStripVisitor
template<>
class LunaTraits< osgUtil::TriStripVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::TriStripVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::TriStripVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::TriStripVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgUtil::UpdateVisitor
template<>
class LunaTraits< osgUtil::UpdateVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgUtil::UpdateVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgUtil::UpdateVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osgUtil::UpdateVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::ViewerBase
template<>
class LunaTraits< osgViewer::ViewerBase > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::ViewerBase* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::ViewerBase* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::ViewerBase base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::CompositeViewer
template<>
class LunaTraits< osgViewer::CompositeViewer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::CompositeViewer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::CompositeViewer* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::CompositeViewer base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::GraphicsWindow
template<>
class LunaTraits< osgViewer::GraphicsWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::GraphicsWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::GraphicsWindow* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::GraphicsWindow base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osgViewer::View * >
template<>
class LunaTraits< std::list< osgViewer::View * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osgViewer::View * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osgViewer::View * >* obj);
	typedef std::list< osgViewer::View * > parent_t;
	typedef std::list< osgViewer::View * > base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::GraphicsWindowEmbedded
template<>
class LunaTraits< osgViewer::GraphicsWindowEmbedded > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::GraphicsWindowEmbedded* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::GraphicsWindowEmbedded* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::GraphicsWindowEmbedded base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::GraphicsWindowFunctionProxy
template<>
class LunaTraits< osgViewer::GraphicsWindowFunctionProxy > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::GraphicsWindowFunctionProxy* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::GraphicsWindowFunctionProxy* obj);
	typedef osgViewer::GraphicsWindowFunctionProxy parent_t;
	typedef osgViewer::GraphicsWindowFunctionProxy base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::OpenGLQuerySupport
template<>
class LunaTraits< osgViewer::OpenGLQuerySupport > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::OpenGLQuerySupport* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::OpenGLQuerySupport* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::OpenGLQuerySupport base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::Renderer
template<>
class LunaTraits< osgViewer::Renderer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::Renderer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::Renderer* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::Renderer base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::Scene
template<>
class LunaTraits< osgViewer::Scene > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::Scene* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::Scene* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::Scene base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::DepthPartitionSettings
template<>
class LunaTraits< osgViewer::DepthPartitionSettings > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::DepthPartitionSettings* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::DepthPartitionSettings* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::DepthPartitionSettings base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::View
template<>
class LunaTraits< osgViewer::View > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::View* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::View* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::View base_t;
	static luna_ConverterType converters[];
};

// Class: std::list< osg::ref_ptr< osgGA::GUIEventHandler > >
template<>
class LunaTraits< std::list< osg::ref_ptr< osgGA::GUIEventHandler > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::list< osg::ref_ptr< osgGA::GUIEventHandler > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::list< osg::ref_ptr< osgGA::GUIEventHandler > >* obj);
	typedef std::list< osg::ref_ptr< osgGA::GUIEventHandler > > parent_t;
	typedef std::list< osg::ref_ptr< osgGA::GUIEventHandler > > base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::Viewer
template<>
class LunaTraits< osgViewer::Viewer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::Viewer* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::Viewer* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::Viewer base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::Camera * >
template<>
class LunaTraits< std::vector< osg::Camera * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::Camera * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::Camera * >* obj);
	typedef std::vector< osg::Camera * > parent_t;
	typedef std::vector< osg::Camera * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osgViewer::GraphicsWindow * >
template<>
class LunaTraits< std::vector< osgViewer::GraphicsWindow * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgViewer::GraphicsWindow * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgViewer::GraphicsWindow * >* obj);
	typedef std::vector< osgViewer::GraphicsWindow * > parent_t;
	typedef std::vector< osgViewer::GraphicsWindow * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< OpenThreads::Thread * >
template<>
class LunaTraits< std::vector< OpenThreads::Thread * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< OpenThreads::Thread * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< OpenThreads::Thread * >* obj);
	typedef std::vector< OpenThreads::Thread * > parent_t;
	typedef std::vector< OpenThreads::Thread * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osg::OperationThread * >
template<>
class LunaTraits< std::vector< osg::OperationThread * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::OperationThread * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::OperationThread * >* obj);
	typedef std::vector< osg::OperationThread * > parent_t;
	typedef std::vector< osg::OperationThread * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osgViewer::Scene * >
template<>
class LunaTraits< std::vector< osgViewer::Scene * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgViewer::Scene * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgViewer::Scene * >* obj);
	typedef std::vector< osgViewer::Scene * > parent_t;
	typedef std::vector< osgViewer::Scene * > base_t;
	static luna_ConverterType converters[];
};

// Class: std::vector< osgViewer::View * >
template<>
class LunaTraits< std::vector< osgViewer::View * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgViewer::View * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgViewer::View * >* obj);
	typedef std::vector< osgViewer::View * > parent_t;
	typedef std::vector< osgViewer::View * > base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::HelpHandler
template<>
class LunaTraits< osgViewer::HelpHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::HelpHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::HelpHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::HelpHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::StatsHandler
template<>
class LunaTraits< osgViewer::StatsHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::StatsHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::StatsHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::StatsHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::WindowSizeHandler
template<>
class LunaTraits< osgViewer::WindowSizeHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::WindowSizeHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::WindowSizeHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::WindowSizeHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::ThreadingHandler
template<>
class LunaTraits< osgViewer::ThreadingHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::ThreadingHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::ThreadingHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::ThreadingHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::RecordCameraPathHandler
template<>
class LunaTraits< osgViewer::RecordCameraPathHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::RecordCameraPathHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::RecordCameraPathHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::RecordCameraPathHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::LODScaleHandler
template<>
class LunaTraits< osgViewer::LODScaleHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::LODScaleHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::LODScaleHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::LODScaleHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::ToggleSyncToVBlankHandler
template<>
class LunaTraits< osgViewer::ToggleSyncToVBlankHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::ToggleSyncToVBlankHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::ToggleSyncToVBlankHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::ToggleSyncToVBlankHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::ScreenCaptureHandler
template<>
class LunaTraits< osgViewer::ScreenCaptureHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::ScreenCaptureHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::ScreenCaptureHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::ScreenCaptureHandler base_t;
	static luna_ConverterType converters[];
};

// Class: osgViewer::InteractiveImageHandler
template<>
class LunaTraits< osgViewer::InteractiveImageHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgViewer::InteractiveImageHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgViewer::InteractiveImageHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgViewer::InteractiveImageHandler base_t;
	static luna_ConverterType converters[];
};

// Class: std::istream
template<>
class LunaTraits< std::istream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::istream* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::istream* obj);
	typedef std::istream parent_t;
	typedef std::istream base_t;
	static luna_ConverterType converters[];
};

// Class: std::ostream
template<>
class LunaTraits< std::ostream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::ostream* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::ostream* obj);
	typedef std::ostream parent_t;
	typedef std::ostream base_t;
	static luna_ConverterType converters[];
};


// Mapped type: std::vector< osg::VertexAttribAlias >
template<>
class LunaTraits< std::vector< osg::VertexAttribAlias > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::VertexAttribAlias >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::VertexAttribAlias >* obj);
	typedef std::vector< osg::VertexAttribAlias > parent_t;
	typedef std::vector< osg::VertexAttribAlias > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< osg::State::AttributePair >
template<>
class LunaTraits< std::vector< osg::State::AttributePair > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::State::AttributePair >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::State::AttributePair >* obj);
	typedef std::vector< osg::State::AttributePair > parent_t;
	typedef std::vector< osg::State::AttributePair > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< osgUtil::Hit >
template<>
class LunaTraits< std::vector< osgUtil::Hit > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osgUtil::Hit >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osgUtil::Hit >* obj);
	typedef std::vector< osgUtil::Hit > parent_t;
	typedef std::vector< osgUtil::Hit > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::map< const osg::LineSegment *, osgUtil::IntersectVisitor::HitList >
template<>
class LunaTraits< std::map< const osg::LineSegment *, osgUtil::IntersectVisitor::HitList > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< const osg::LineSegment *, osgUtil::IntersectVisitor::HitList >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< const osg::LineSegment *, osgUtil::IntersectVisitor::HitList >* obj);
	typedef std::map< const osg::LineSegment *, osgUtil::IntersectVisitor::HitList > parent_t;
	typedef std::map< const osg::LineSegment *, osgUtil::IntersectVisitor::HitList > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< osg::ref_ptr< osgUtil::Tessellator::Prim > >
template<>
class LunaTraits< std::vector< osg::ref_ptr< osgUtil::Tessellator::Prim > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< osg::ref_ptr< osgUtil::Tessellator::Prim > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< osg::ref_ptr< osgUtil::Tessellator::Prim > >* obj);
	typedef std::vector< osg::ref_ptr< osgUtil::Tessellator::Prim > > parent_t;
	typedef std::vector< osg::ref_ptr< osgUtil::Tessellator::Prim > > base_t;
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

template<>
class LunaType< 32973728 > {
public:
	typedef __int64 type;
	
};

template<>
class LunaType< 19942584 > {
public:
	typedef osg::AnimationPath::ControlPoint type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 72030032 > {
public:
	typedef osgUtil::EdgeCollector::Edgeloop::EdgeList type;
	
};

template<>
class LunaType< 37525689 > {
public:
	typedef GLUtesselator type;
	
};

template<>
class LunaType< 2943627 > {
public:
	typedef osg::KdTree::LineSegmentIntersection type;
	
};

template<>
class LunaType< 55864787 > {
public:
	typedef osg::KdTree::LineSegmentIntersection::IndexList type;
	
};

template<>
class LunaType< 14271479 > {
public:
	typedef osg::KdTree::LineSegmentIntersection::RatioList type;
	
};

template<>
class LunaType< 50545385 > {
public:
	typedef osgDB::ExternalFileWriter::ObjectData type;
	
};

template<>
class LunaType< 67360031 > {
public:
	typedef osg::ArgumentParser::Parameter type;
	
};

template<>
class LunaType< 17496146 > {
public:
	typedef osg::PagedLOD::PerRangeData type;
	
};

template<>
class LunaType< 68659525 > {
public:
	typedef osgDB::ImageOptions::PixelWindow type;
	
};

template<>
class LunaType< 44466488 > {
public:
	typedef osgDB::ImageOptions::RatioWindow type;
	
};

template<>
class LunaType< 25279089 > {
public:
	typedef osgDB::ReaderWriter::ReadResult type;
	
};

template<>
class LunaType< 83590106 > {
public:
	typedef osg::GraphicsContext::ScreenIdentifier type;
	
};

template<>
class LunaType< 15827252 > {
public:
	typedef osg::GraphicsContext::ScreenSettings type;
	
};

template<>
class LunaType< 69361645 > {
public:
	typedef osg::Texture::TextureProfile type;
	
};

template<>
class LunaType< 77825770 > {
public:
	typedef osgGA::GUIEventAdapter::TouchData::TouchSet type;
	
};

template<>
class LunaType< 88052401 > {
public:
	typedef osgGA::GUIEventAdapter::TouchData::TouchPoint type;
	
};

template<>
class LunaType< 43117328 > {
public:
	typedef osg::KdTree::Triangle type;
	
};

template<>
class LunaType< 92598171 > {
public:
	typedef osg::Program::UniformBlockInfo type;
	
};

template<>
class LunaType< 80248523 > {
public:
	typedef osg::Geometry::Vec3ArrayData type;
	
};

template<>
class LunaType< 54653644 > {
public:
	typedef osgDB::ReaderWriter::WriteResult type;
	
};

template<>
class LunaType< 53605181 > {
public:
	typedef OpenThreads::Atomic type;
	
};

template<>
class LunaType< 51707784 > {
public:
	typedef OpenThreads::AtomicPtr type;
	
};

template<>
class LunaType< 8229717 > {
public:
	typedef OpenThreads::Barrier type;
	
};

template<>
class LunaType< 92736679 > {
public:
	typedef OpenThreads::Block type;
	
};

template<>
class LunaType< 46486281 > {
public:
	typedef OpenThreads::BlockCount type;
	
};

template<>
class LunaType< 25792444 > {
public:
	typedef OpenThreads::Condition type;
	
};

template<>
class LunaType< 3168391 > {
public:
	typedef OpenThreads::Mutex type;
	
};

template<>
class LunaType< 72295452 > {
public:
	typedef OpenThreads::ReadWriteMutex type;
	
};

template<>
class LunaType< 10551303 > {
public:
	typedef OpenThreads::ScopedReadLock type;
	
};

template<>
class LunaType< 25239438 > {
public:
	typedef OpenThreads::ScopedWriteLock type;
	
};

template<>
class LunaType< 86558172 > {
public:
	typedef OpenThreads::Thread type;
	
};

template<>
class LunaType< 59587824 > {
public:
	typedef osg::ByteArray type;
	
};

template<>
class LunaType< 17157487 > {
public:
	typedef osg::ShortArray type;
	
};

template<>
class LunaType< 28130065 > {
public:
	typedef osg::IntArray type;
	
};

template<>
class LunaType< 72202494 > {
public:
	typedef osg::UByteArray type;
	
};

template<>
class LunaType< 4787198 > {
public:
	typedef osg::UShortArray type;
	
};

template<>
class LunaType< 86600648 > {
public:
	typedef osg::UIntArray type;
	
};

template<>
class LunaType< 43730923 > {
public:
	typedef osg::FloatArray type;
	
};

template<>
class LunaType< 78575573 > {
public:
	typedef osg::Vec2Array type;
	
};

template<>
class LunaType< 7204710 > {
public:
	typedef osg::Vec3Array type;
	
};

template<>
class LunaType< 35833861 > {
public:
	typedef osg::Vec4Array type;
	
};

template<>
class LunaType< 83703711 > {
public:
	typedef osg::Vec4ubArray type;
	
};

template<>
class LunaType< 22062959 > {
public:
	typedef osg::Vec2sArray type;
	
};

template<>
class LunaType< 9566505 > {
public:
	typedef osg::Vec3sArray type;
	
};

template<>
class LunaType< 97070066 > {
public:
	typedef osg::Vec4sArray type;
	
};

template<>
class LunaType< 35367467 > {
public:
	typedef osg::Vec2bArray type;
	
};

template<>
class LunaType< 22871013 > {
public:
	typedef osg::Vec3bArray type;
	
};

template<>
class LunaType< 10374559 > {
public:
	typedef osg::Vec4bArray type;
	
};

template<>
class LunaType< 50192637 > {
public:
	typedef osg::DoubleArray type;
	
};

template<>
class LunaType< 92625769 > {
public:
	typedef osg::Vec2dArray type;
	
};

template<>
class LunaType< 80129315 > {
public:
	typedef osg::Vec3dArray type;
	
};

template<>
class LunaType< 67632861 > {
public:
	typedef osg::Vec4dArray type;
	
};

template<>
class LunaType< 82206572 > {
public:
	typedef osg::MatrixfArray type;
	
};

template<>
class LunaType< 82744899 > {
public:
	typedef osg::BoundingBoxf type;
	
};

template<>
class LunaType< 82744897 > {
public:
	typedef osg::BoundingBoxd type;
	
};

template<>
class LunaType< 54337302 > {
public:
	typedef osg::BoundingSpheref type;
	
};

template<>
class LunaType< 54337300 > {
public:
	typedef osg::BoundingSphered type;
	
};

template<>
class LunaType< 59774582 > {
public:
	typedef osg::GLBufferObjectList type;
	
};

template<>
class LunaType< 57409252 > {
public:
	typedef osg::CostPair type;
	
};

template<>
class LunaType< 52729833 > {
public:
	typedef osg::NodeList type;
	
};

template<>
class LunaType< 71630045 > {
public:
	typedef osg::ImageList type;
	
};

template<>
class LunaType< 52841328 > {
public:
	typedef osg::NodePath type;
	
};

template<>
class LunaType< 71600444 > {
public:
	typedef osg::NodePathList type;
	
};

template<>
class LunaType< 63553411 > {
public:
	typedef osg::MatrixList type;
	
};

template<>
class LunaType< 65202791 > {
public:
	typedef osg::RefNodePath type;
	
};

template<>
class LunaType< 15861945 > {
public:
	typedef osg::VectorGLsizei type;
	
};

template<>
class LunaType< 17499950 > {
public:
	typedef osg::VectorGLubyte type;
	
};

template<>
class LunaType< 57687479 > {
public:
	typedef osg::VectorGLushort type;
	
};

template<>
class LunaType< 74764459 > {
public:
	typedef osg::VectorGLuint type;
	
};

template<>
class LunaType< 73063359 > {
public:
	typedef osg::ShaderComponents type;
	
};

template<>
class LunaType< 39369741 > {
public:
	typedef osg::ShadowVolumeOccluderList type;
	
};

template<>
class LunaType< 18903788 > {
public:
	typedef osg::Matrix2 type;
	
};

template<>
class LunaType< 66541660 > {
public:
	typedef osg::Matrix2x3 type;
	
};

template<>
class LunaType< 66541661 > {
public:
	typedef osg::Matrix2x4 type;
	
};

template<>
class LunaType< 66542620 > {
public:
	typedef osg::Matrix3x2 type;
	
};

template<>
class LunaType< 18903789 > {
public:
	typedef osg::Matrix3 type;
	
};

template<>
class LunaType< 66542622 > {
public:
	typedef osg::Matrix3x4 type;
	
};

template<>
class LunaType< 66543581 > {
public:
	typedef osg::Matrix4x2 type;
	
};

template<>
class LunaType< 66543582 > {
public:
	typedef osg::Matrix4x3 type;
	
};

template<>
class LunaType< 86017463 > {
public:
	typedef osg::Matrix2d type;
	
};

template<>
class LunaType< 62791260 > {
public:
	typedef osg::Matrix2x3d type;
	
};

template<>
class LunaType< 62791291 > {
public:
	typedef osg::Matrix2x4d type;
	
};

template<>
class LunaType< 62821020 > {
public:
	typedef osg::Matrix3x2d type;
	
};

template<>
class LunaType< 86017494 > {
public:
	typedef osg::Matrix3d type;
	
};

template<>
class LunaType< 62821082 > {
public:
	typedef osg::Matrix3x4d type;
	
};

template<>
class LunaType< 62850811 > {
public:
	typedef osg::Matrix4x2d type;
	
};

template<>
class LunaType< 62850842 > {
public:
	typedef osg::Matrix4x3d type;
	
};

template<>
class LunaType< 3539396 > {
public:
	typedef osg::StringValueObject type;
	
};

template<>
class LunaType< 77400297 > {
public:
	typedef osg::BoolValueObject type;
	
};

template<>
class LunaType< 310099 > {
public:
	typedef osg::CharValueObject type;
	
};

template<>
class LunaType< 43245321 > {
public:
	typedef osg::UCharValueObject type;
	
};

template<>
class LunaType< 7581487 > {
public:
	typedef osg::ShortValueObject type;
	
};

template<>
class LunaType< 26732852 > {
public:
	typedef osg::UShortValueObject type;
	
};

template<>
class LunaType< 37099841 > {
public:
	typedef osg::IntValueObject type;
	
};

template<>
class LunaType< 62642718 > {
public:
	typedef osg::UIntValueObject type;
	
};

template<>
class LunaType< 93822108 > {
public:
	typedef osg::FloatValueObject type;
	
};

template<>
class LunaType< 23601808 > {
public:
	typedef osg::DoubleValueObject type;
	
};

template<>
class LunaType< 9780955 > {
public:
	typedef osg::Vec2fValueObject type;
	
};

template<>
class LunaType< 56306081 > {
public:
	typedef osg::Vec3fValueObject type;
	
};

template<>
class LunaType< 2831186 > {
public:
	typedef osg::Vec4fValueObject type;
	
};

template<>
class LunaType< 40755179 > {
public:
	typedef osg::Vec2dValueObject type;
	
};

template<>
class LunaType< 99776782 > {
public:
	typedef osg::Vec3dValueObject type;
	
};

template<>
class LunaType< 46300926 > {
public:
	typedef osg::Vec4dValueObject type;
	
};

template<>
class LunaType< 57401373 > {
public:
	typedef osg::QuatValueObject type;
	
};

template<>
class LunaType< 98506363 > {
public:
	typedef osg::PlaneValueObject type;
	
};

template<>
class LunaType< 42089936 > {
public:
	typedef osg::MatrixfValueObject type;
	
};

template<>
class LunaType< 1898386 > {
public:
	typedef osg::MatrixdValueObject type;
	
};

template<>
class LunaType< 38387791 > {
public:
	typedef osg::Vec3dList type;
	
};

template<>
class LunaType< 73580662 > {
public:
	typedef osg::StateSetList type;
	
};

template<>
class LunaType< 97032511 > {
public:
	typedef osg::StateAttributeUIntPairList type;
	
};

template<>
class LunaType< 87612809 > {
public:
	typedef osg::AnimationPath::TimeControlPointMap type;
	
};

template<>
class LunaType< 31149124 > {
public:
	typedef osg::ApplicationUsage::UsageMap type;
	
};

template<>
class LunaType< 50027641 > {
public:
	typedef osg::ApplicationUsageProxy type;
	
};

template<>
class LunaType< 99527028 > {
public:
	typedef osg::ArgumentParser type;
	
};

template<>
class LunaType< 92019184 > {
public:
	typedef osg::ArgumentParser::ErrorMessageMap type;
	
};

template<>
class LunaType< 35264102 > {
public:
	typedef osg::ArrayVisitor type;
	
};

template<>
class LunaType< 80735172 > {
public:
	typedef osg::ConstArrayVisitor type;
	
};

template<>
class LunaType< 87991103 > {
public:
	typedef osg::ValueVisitor type;
	
};

template<>
class LunaType< 86989408 > {
public:
	typedef osg::ConstValueVisitor type;
	
};

template<>
class LunaType< 75373010 > {
public:
	typedef osg::Billboard::PositionList type;
	
};

template<>
class LunaType< 12032151 > {
public:
	typedef osg::BufferObjectProfile type;
	
};

template<>
class LunaType< 69650430 > {
public:
	typedef osg::GLBufferObject::BufferEntry type;
	
};

template<>
class LunaType< 31435107 > {
public:
	typedef osg::CullSettings type;
	
};

template<>
class LunaType< 89024977 > {
public:
	typedef osg::Camera::BufferAttachmentMap type;
	
};

template<>
class LunaType< 65796671 > {
public:
	typedef osg::Camera::Attachment type;
	
};

template<>
class LunaType< 73670266 > {
public:
	typedef osg::ClipNode::ClipPlaneList type;
	
};

template<>
class LunaType< 26463029 > {
public:
	typedef osg::CollectOccludersVisitor::ShadowVolumeOccluderSet type;
	
};

template<>
class LunaType< 25393619 > {
public:
	typedef osg::ConvexPlanarOccluder::HoleList type;
	
};

template<>
class LunaType< 16091124 > {
public:
	typedef osg::ConvexPlanarPolygon type;
	
};

template<>
class LunaType< 66044715 > {
public:
	typedef osg::ConvexPlanarPolygon::VertexList type;
	
};

template<>
class LunaType< 27134364 > {
public:
	typedef osg::CopyOp type;
	
};

template<>
class LunaType< 87315315 > {
public:
	typedef osg::CullingSet::StateFrustumPair type;
	
};

template<>
class LunaType< 87204151 > {
public:
	typedef osg::CullingSet::StateFrustumList type;
	
};

template<>
class LunaType< 82970996 > {
public:
	typedef osg::CullingSet::OccluderList type;
	
};

template<>
class LunaType< 85477666 > {
public:
	typedef osg::CullStack::OccluderList type;
	
};

template<>
class LunaType< 71916660 > {
public:
	typedef osg::CullStack::CullingStack type;
	
};

template<>
class LunaType< 1576447 > {
public:
	typedef osg::DeleteHandler type;
	
};

template<>
class LunaType< 33538310 > {
public:
	typedef osg::DeleteHandler::FrameNumberObjectPair type;
	
};

template<>
class LunaType< 16632691 > {
public:
	typedef osg::DeleteHandler::ObjectsToDeleteList type;
	
};

template<>
class LunaType< 87121047 > {
public:
	typedef osg::Drawable::ParentList type;
	
};

template<>
class LunaType< 13846292 > {
public:
	typedef osg::FragmentProgram::LocalParamList type;
	
};

template<>
class LunaType< 4745759 > {
public:
	typedef osg::FragmentProgram::MatrixList type;
	
};

template<>
class LunaType< 90669884 > {
public:
	typedef osg::FrameBufferAttachment type;
	
};

template<>
class LunaType< 67520441 > {
public:
	typedef osg::FrameBufferObject::AttachmentMap type;
	
};

template<>
class LunaType< 20278517 > {
public:
	typedef osg::FrameBufferObject::MultipleRenderingTargets type;
	
};

template<>
class LunaType< 47161606 > {
public:
	typedef osg::Geode::DrawableList type;
	
};

template<>
class LunaType< 57346078 > {
public:
	typedef osg::Geometry::ArrayDataList type;
	
};

template<>
class LunaType< 23074168 > {
public:
	typedef osg::Geometry::PrimitiveSetList type;
	
};

template<>
class LunaType< 26926568 > {
public:
	typedef osg::Geometry::ArrayList type;
	
};

template<>
class LunaType< 9739566 > {
public:
	typedef osg::Geometry::DrawElementsList type;
	
};

template<>
class LunaType< 26680564 > {
public:
	typedef osg::Geometry::ArrayData type;
	
};

template<>
class LunaType< 22643526 > {
public:
	typedef osg::GLBeginEndAdapter type;
	
};

template<>
class LunaType< 58853759 > {
public:
	typedef osg::PixelStorageModes type;
	
};

template<>
class LunaType< 96527715 > {
public:
	typedef osg::GraphicsContext::ScreenSettingsList type;
	
};

template<>
class LunaType< 62380053 > {
public:
	typedef osg::GraphicsContext::GraphicsContexts type;
	
};

template<>
class LunaType< 2003493 > {
public:
	typedef osg::GraphicsContext::GraphicsOperationQueue type;
	
};

template<>
class LunaType< 30655397 > {
public:
	typedef osg::GraphicsContext::Cameras type;
	
};

template<>
class LunaType< 49050770 > {
public:
	typedef osg::ClampedLinearCostFunction1D type;
	
};

template<>
class LunaType< 63715389 > {
public:
	typedef osg::Image::MipmapDataType type;
	
};

template<>
class LunaType< 93282437 > {
public:
	typedef osg::Image::DimensionsChangedCallbackVector type;
	
};

template<>
class LunaType< 9354401 > {
public:
	typedef osg::Image::DataIterator type;
	
};

template<>
class LunaType< 44242447 > {
public:
	typedef osg::ImageSequence::ImageDataList type;
	
};

template<>
class LunaType< 90366507 > {
public:
	typedef osg::ImageSequence::ImageData type;
	
};

template<>
class LunaType< 83757031 > {
public:
	typedef osg::ImageStream::AudioStreams type;
	
};

template<>
class LunaType< 91252552 > {
public:
	typedef osg::KdTree::LineSegmentIntersections type;
	
};

template<>
class LunaType< 4517862 > {
public:
	typedef osg::KdTree::KdNodeList type;
	
};

template<>
class LunaType< 51468997 > {
public:
	typedef osg::KdTree::TriangleList type;
	
};

template<>
class LunaType< 4714115 > {
public:
	typedef osg::KdTree::BuildOptions type;
	
};

template<>
class LunaType< 72782769 > {
public:
	typedef osg::KdTree::KdNode type;
	
};

template<>
class LunaType< 2638765 > {
public:
	typedef osg::LOD::MinMaxPair type;
	
};

template<>
class LunaType< 74660837 > {
public:
	typedef osg::LOD::RangeList type;
	
};

template<>
class LunaType< 18903838 > {
public:
	typedef osg::Matrixd type;
	
};

template<>
class LunaType< 18903840 > {
public:
	typedef osg::Matrixf type;
	
};

template<>
class LunaType< 44162724 > {
public:
	typedef osg::Node::ParentList type;
	
};

template<>
class LunaType< 27507650 > {
public:
	typedef osg::Node::DescriptionList type;
	
};

template<>
class LunaType< 69073940 > {
public:
	typedef osg::NodeAcceptOp type;
	
};

template<>
class LunaType< 58375525 > {
public:
	typedef osg::Observer type;
	
};

template<>
class LunaType< 311637 > {
public:
	typedef osg::ObserverSet::Observers type;
	
};

template<>
class LunaType< 5626651 > {
public:
	typedef osg::ObserverNodePath type;
	
};

template<>
class LunaType< 14844916 > {
public:
	typedef osg::OperationQueue::OperationThreads type;
	
};

template<>
class LunaType< 56081763 > {
public:
	typedef osg::PagedLOD::PerRangeDataList type;
	
};

template<>
class LunaType< 86970521 > {
public:
	typedef osg::Plane type;
	
};

template<>
class LunaType< 26652350 > {
public:
	typedef osg::Polytope type;
	
};

template<>
class LunaType< 33161232 > {
public:
	typedef osg::Polytope::PlaneList type;
	
};

template<>
class LunaType< 71066845 > {
public:
	typedef osg::Polytope::VertexList type;
	
};

template<>
class LunaType< 95628403 > {
public:
	typedef osg::Polytope::MaskStack type;
	
};

template<>
class LunaType< 65712176 > {
public:
	typedef osg::Program::AttribBindingList type;
	
};

template<>
class LunaType< 28455885 > {
public:
	typedef osg::Program::FragDataBindingList type;
	
};

template<>
class LunaType< 76794797 > {
public:
	typedef osg::Program::UniformBlockBindingList type;
	
};

template<>
class LunaType< 87388636 > {
public:
	typedef osg::Program::ActiveUniformMap type;
	
};

template<>
class LunaType< 58119214 > {
public:
	typedef osg::Program::ActiveVarInfoMap type;
	
};

template<>
class LunaType< 70732441 > {
public:
	typedef osg::Program::UniformBlockMap type;
	
};

template<>
class LunaType< 71916305 > {
public:
	typedef osg::Program::ActiveVarInfo type;
	
};

template<>
class LunaType< 80263306 > {
public:
	typedef osg::Quat type;
	
};

template<>
class LunaType< 2286263 > {
public:
	typedef osg::RenderInfo type;
	
};

template<>
class LunaType< 87506632 > {
public:
	typedef osg::Shader::CodeInjectionMap type;
	
};

template<>
class LunaType< 39219188 > {
public:
	typedef osg::ShaderComposer::Shaders type;
	
};

template<>
class LunaType< 60344650 > {
public:
	typedef osg::ShadowVolumeOccluder type;
	
};

template<>
class LunaType< 59079133 > {
public:
	typedef osg::ShadowVolumeOccluder::HoleList type;
	
};

template<>
class LunaType< 36301858 > {
public:
	typedef osg::ShapeVisitor type;
	
};

template<>
class LunaType< 45826538 > {
public:
	typedef osg::ConstShapeVisitor type;
	
};

template<>
class LunaType< 93979646 > {
public:
	typedef osg::HeightField::HeightList type;
	
};

template<>
class LunaType< 38958908 > {
public:
	typedef osg::CompositeShape::ChildList type;
	
};

template<>
class LunaType< 48453816 > {
public:
	typedef osg::VertexAttribAlias type;
	
};

template<>
class LunaType< 493552 > {
public:
	typedef osg::StateAttribute::TypeMemberPair type;
	
};

template<>
class LunaType< 57890271 > {
public:
	typedef osg::StateAttribute::ParentList type;
	
};

template<>
class LunaType< 48108040 > {
public:
	typedef osg::StateAttribute::ModeUsage type;
	
};

template<>
class LunaType< 81229680 > {
public:
	typedef osg::StateSet::ParentList type;
	
};

template<>
class LunaType< 59463386 > {
public:
	typedef osg::StateSet::ModeList type;
	
};

template<>
class LunaType< 11966361 > {
public:
	typedef osg::StateSet::RefAttributePair type;
	
};

template<>
class LunaType< 84373691 > {
public:
	typedef osg::StateSet::AttributeList type;
	
};

template<>
class LunaType< 14028616 > {
public:
	typedef osg::StateSet::TextureModeList type;
	
};

template<>
class LunaType< 35981382 > {
public:
	typedef osg::StateSet::TextureAttributeList type;
	
};

template<>
class LunaType< 49832211 > {
public:
	typedef osg::StateSet::RefUniformPair type;
	
};

template<>
class LunaType< 47344864 > {
public:
	typedef osg::StateSet::UniformList type;
	
};

template<>
class LunaType< 79434031 > {
public:
	typedef osg::Stats::AttributeMap type;
	
};

template<>
class LunaType< 79753172 > {
public:
	typedef osg::Stats::AttributeMapList type;
	
};

template<>
class LunaType< 36973735 > {
public:
	typedef osg::Stats::CollectMap type;
	
};

template<>
class LunaType< 23153681 > {
public:
	typedef osg::Switch::ValueList type;
	
};

template<>
class LunaType< 68159455 > {
public:
	typedef osg::Texture::TextureObjectList type;
	
};

template<>
class LunaType< 12425423 > {
public:
	typedef osg::Texture::ImageAttachment type;
	
};

template<>
class LunaType< 90586498 > {
public:
	typedef osg::Timer type;
	
};

template<>
class LunaType< 83804404 > {
public:
	typedef osg::ElapsedTime type;
	
};

template<>
class LunaType< 93067344 > {
public:
	typedef osg::TransferFunction1D::ColorMap type;
	
};

template<>
class LunaType< 54040596 > {
public:
	typedef osg::Uniform::ParentList type;
	
};

template<>
class LunaType< 13881074 > {
public:
	typedef osg::UserDataContainer::DescriptionList type;
	
};

template<>
class LunaType< 96962033 > {
public:
	typedef osg::ValueObject::GetValueVisitor type;
	
};

template<>
class LunaType< 55012529 > {
public:
	typedef osg::ValueObject::SetValueVisitor type;
	
};

template<>
class LunaType< 12315749 > {
public:
	typedef osg::ValueObjectClassNameTrait< std::string > type;
	
};

template<>
class LunaType< 41483556 > {
public:
	typedef osg::ValueObjectClassNameTrait< bool > type;
	
};

template<>
class LunaType< 63236752 > {
public:
	typedef osg::ValueObjectClassNameTrait< char > type;
	
};

template<>
class LunaType< 78346813 > {
public:
	typedef osg::ValueObjectClassNameTrait< unsigned char > type;
	
};

template<>
class LunaType< 73401234 > {
public:
	typedef osg::ValueObjectClassNameTrait< short > type;
	
};

template<>
class LunaType< 41811436 > {
public:
	typedef osg::ValueObjectClassNameTrait< unsigned short > type;
	
};

template<>
class LunaType< 40033589 > {
public:
	typedef osg::ValueObjectClassNameTrait< int > type;
	
};

template<>
class LunaType< 63101669 > {
public:
	typedef osg::ValueObjectClassNameTrait< unsigned int > type;
	
};

template<>
class LunaType< 49867860 > {
public:
	typedef osg::ValueObjectClassNameTrait< float > type;
	
};

template<>
class LunaType< 55730813 > {
public:
	typedef osg::ValueObjectClassNameTrait< double > type;
	
};

template<>
class LunaType< 36914485 > {
public:
	typedef osg::ValueObjectClassNameTrait< Vec2f > type;
	
};

template<>
class LunaType< 36944276 > {
public:
	typedef osg::ValueObjectClassNameTrait< Vec3f > type;
	
};

template<>
class LunaType< 36974067 > {
public:
	typedef osg::ValueObjectClassNameTrait< Vec4f > type;
	
};

template<>
class LunaType< 36912563 > {
public:
	typedef osg::ValueObjectClassNameTrait< Vec2d > type;
	
};

template<>
class LunaType< 36942354 > {
public:
	typedef osg::ValueObjectClassNameTrait< Vec3d > type;
	
};

template<>
class LunaType< 36972145 > {
public:
	typedef osg::ValueObjectClassNameTrait< Vec4d > type;
	
};

template<>
class LunaType< 59919919 > {
public:
	typedef osg::ValueObjectClassNameTrait< Quat > type;
	
};

template<>
class LunaType< 12237871 > {
public:
	typedef osg::ValueObjectClassNameTrait< Plane > type;
	
};

template<>
class LunaType< 33242627 > {
public:
	typedef osg::ValueObjectClassNameTrait< Matrixf > type;
	
};

template<>
class LunaType< 33240705 > {
public:
	typedef osg::ValueObjectClassNameTrait< Matrixd > type;
	
};

template<>
class LunaType< 92303169 > {
public:
	typedef osg::Vec2b type;
	
};

template<>
class LunaType< 92303171 > {
public:
	typedef osg::Vec2d type;
	
};

template<>
class LunaType< 92303173 > {
public:
	typedef osg::Vec2f type;
	
};

template<>
class LunaType< 92303186 > {
public:
	typedef osg::Vec2s type;
	
};

template<>
class LunaType< 92303200 > {
public:
	typedef osg::Vec3b type;
	
};

template<>
class LunaType< 92303202 > {
public:
	typedef osg::Vec3d type;
	
};

template<>
class LunaType< 92303204 > {
public:
	typedef osg::Vec3f type;
	
};

template<>
class LunaType< 92303217 > {
public:
	typedef osg::Vec3s type;
	
};

template<>
class LunaType< 92303231 > {
public:
	typedef osg::Vec4b type;
	
};

template<>
class LunaType< 92303233 > {
public:
	typedef osg::Vec4d type;
	
};

template<>
class LunaType< 92303235 > {
public:
	typedef osg::Vec4f type;
	
};

template<>
class LunaType< 92303248 > {
public:
	typedef osg::Vec4s type;
	
};

template<>
class LunaType< 61400540 > {
public:
	typedef osg::Vec4ub type;
	
};

template<>
class LunaType< 77412943 > {
public:
	typedef osg::VertexProgram::LocalParamList type;
	
};

template<>
class LunaType< 89639670 > {
public:
	typedef osg::VertexProgram::MatrixList type;
	
};

template<>
class LunaType< 94812983 > {
public:
	typedef osg::View::Slave type;
	
};

template<>
class LunaType< 74215671 > {
public:
	typedef osg::ref_ptr< osg::Array > type;
	
};

template<>
class LunaType< 15557275 > {
public:
	typedef osg::ref_ptr< osg::Image > type;
	
};

template<>
class LunaType< 88770621 > {
public:
	typedef osg::ref_ptr< osg::PrimitiveSet > type;
	
};

template<>
class LunaType< 50949526 > {
public:
	typedef osg::ref_ptr< osg::AnimationPath > type;
	
};

template<>
class LunaType< 60175922 > {
public:
	typedef osg::Vec2dVector type;
	
};

template<>
class LunaType< 72785881 > {
public:
	typedef osg::Vec3dVector type;
	
};

template<>
class LunaType< 85395871 > {
public:
	typedef osg::Vec4dVector type;
	
};

template<>
class LunaType< 54591957 > {
public:
	typedef osgDB::FilePathList type;
	
};

template<>
class LunaType< 1372978 > {
public:
	typedef osgDB::DirectoryContents type;
	
};

template<>
class LunaType< 26072480 > {
public:
	typedef osgDB::StringList type;
	
};

template<>
class LunaType< 26199076 > {
public:
	typedef osgDB::FileNameList type;
	
};

template<>
class LunaType< 75164642 > {
public:
	typedef osgDB::ReaderWriterInfoList type;
	
};

template<>
class LunaType< 18196832 > {
public:
	typedef osgDB::FileList::FileNames type;
	
};

template<>
class LunaType< 17225216 > {
public:
	typedef osgDB::DatabaseRevision::FileNames type;
	
};

template<>
class LunaType< 52474503 > {
public:
	typedef osgDB::DatabaseRevisions::DatabaseRevisionList type;
	
};

template<>
class LunaType< 32567652 > {
public:
	typedef osgDB::ObjectGLenum type;
	
};

template<>
class LunaType< 23791141 > {
public:
	typedef osgDB::ObjectProperty type;
	
};

template<>
class LunaType< 60066730 > {
public:
	typedef osgDB::ObjectMark type;
	
};

template<>
class LunaType< 61619922 > {
public:
	typedef osgDB::DotOsgWrapper::Associates type;
	
};

template<>
class LunaType< 88225557 > {
public:
	typedef osgDB::DeprecatedDotOsgWrapperManager::FileNames type;
	
};

template<>
class LunaType< 98364369 > {
public:
	typedef osgDB::RegisterDotOsgWrapperProxy type;
	
};

template<>
class LunaType< 48602626 > {
public:
	typedef osgDB::ExternalFileWriter type;
	
};

template<>
class LunaType< 51931662 > {
public:
	typedef osgDB::ExternalFileWriter::ObjectsSet type;
	
};

template<>
class LunaType< 2520362 > {
public:
	typedef osgDB::FileCache::DatabaseRevisionsList type;
	
};

template<>
class LunaType< 90030317 > {
public:
	typedef osgDB::FileNameComparator type;
	
};

template<>
class LunaType< 52537382 > {
public:
	typedef osgDB::fstream type;
	
};

template<>
class LunaType< 2552861 > {
public:
	typedef osgDB::ifstream type;
	
};

template<>
class LunaType< 78216342 > {
public:
	typedef osgDB::ofstream type;
	
};

template<>
class LunaType< 56095127 > {
public:
	typedef osgDB::basic_type_wrapper type;
	
};

template<>
class LunaType< 7546407 > {
public:
	typedef osgDB::Field type;
	
};

template<>
class LunaType< 53806078 > {
public:
	typedef osgDB::FieldReader type;
	
};

template<>
class LunaType< 2696163 > {
public:
	typedef osgDB::FieldReaderIterator type;
	
};

template<>
class LunaType< 47918182 > {
public:
	typedef osgDB::InputStream type;
	
};

template<>
class LunaType< 9226650 > {
public:
	typedef osgDB::InputStream::ArrayMap type;
	
};

template<>
class LunaType< 35514121 > {
public:
	typedef osgDB::InputStream::IdentifierMap type;
	
};

template<>
class LunaType< 21896453 > {
public:
	typedef osgDB::ObjectWrapper::SerializerList type;
	
};

template<>
class LunaType< 87742033 > {
public:
	typedef osgDB::ObjectWrapper::FinishedObjectReadCallbackList type;
	
};

template<>
class LunaType< 40321858 > {
public:
	typedef osgDB::UpdateWrapperVersionProxy type;
	
};

template<>
class LunaType< 48773478 > {
public:
	typedef osgDB::ObjectWrapperManager::WrapperMap type;
	
};

template<>
class LunaType< 70763649 > {
public:
	typedef osgDB::ObjectWrapperManager::CompressorMap type;
	
};

template<>
class LunaType< 42677985 > {
public:
	typedef osgDB::ObjectWrapperManager::IntLookupMap type;
	
};

template<>
class LunaType< 23508632 > {
public:
	typedef osgDB::RegisterWrapperProxy type;
	
};

template<>
class LunaType< 26799771 > {
public:
	typedef osgDB::RegisterCompressorProxy type;
	
};

template<>
class LunaType< 70071506 > {
public:
	typedef osgDB::OutputStream type;
	
};

template<>
class LunaType< 44293694 > {
public:
	typedef osgDB::OutputStream::ArrayMap type;
	
};

template<>
class LunaType< 38014942 > {
public:
	typedef osgDB::OutputStream::ObjectMap type;
	
};

template<>
class LunaType< 76529504 > {
public:
	typedef osgDB::ParameterOutput type;
	
};

template<>
class LunaType< 59830411 > {
public:
	typedef osgDB::ReaderWriter::FormatDescriptionMap type;
	
};

template<>
class LunaType< 30730921 > {
public:
	typedef osgDB::ReaderWriter::FeatureList type;
	
};

template<>
class LunaType< 45944163 > {
public:
	typedef osgDB::Registry::MimeTypeExtensionMap type;
	
};

template<>
class LunaType< 48032032 > {
public:
	typedef osgDB::Registry::ReaderWriterList type;
	
};

template<>
class LunaType< 47131645 > {
public:
	typedef osgDB::Registry::ImageProcessorList type;
	
};

template<>
class LunaType< 4579936 > {
public:
	typedef osgDB::Registry::ArchiveExtensionList type;
	
};

template<>
class LunaType< 71649278 > {
public:
	typedef osgDB::PluginFunctionProxy type;
	
};

template<>
class LunaType< 10250166 > {
public:
	typedef osgDB::IntLookup type;
	
};

template<>
class LunaType< 34334607 > {
public:
	typedef osgDB::IntLookup::StringToValue type;
	
};

template<>
class LunaType< 27498346 > {
public:
	typedef osgDB::IntLookup::ValueToString type;
	
};

template<>
class LunaType< 58712445 > {
public:
	typedef osgDB::UserLookupTableProxy type;
	
};

template<>
class LunaType< 73311934 > {
public:
	typedef osgDB::XmlNode::Properties type;
	
};

template<>
class LunaType< 5928633 > {
public:
	typedef osgDB::XmlNode::Children type;
	
};

template<>
class LunaType< 95509303 > {
public:
	typedef osgDB::XmlNode::ControlMap type;
	
};

template<>
class LunaType< 12849652 > {
public:
	typedef osgDB::XmlNode::ControlMap::ControlToCharacterMap type;
	
};

template<>
class LunaType< 7205304 > {
public:
	typedef osgDB::XmlNode::ControlMap::CharacterToControlMap type;
	
};

template<>
class LunaType< 14581426 > {
public:
	typedef osgGA::CameraViewSwitchManipulator::CameraViewList type;
	
};

template<>
class LunaType< 42735238 > {
public:
	typedef osgGA::EventQueue::Events type;
	
};

template<>
class LunaType< 29142050 > {
public:
	typedef osgGA::EventVisitor::EventList type;
	
};

template<>
class LunaType< 85302998 > {
public:
	typedef osgGA::GUIActionAdapter type;
	
};

template<>
class LunaType< 65490382 > {
public:
	typedef osgGA::GUIEventHandlerVisitor type;
	
};

template<>
class LunaType< 44319162 > {
public:
	typedef osgGA::KeySwitchMatrixManipulator::NamedManipulator type;
	
};

template<>
class LunaType< 71456208 > {
public:
	typedef osgGA::KeySwitchMatrixManipulator::KeyManipMap type;
	
};

template<>
class LunaType< 13510606 > {
public:
	typedef osgParticle::rangef type;
	
};

template<>
class LunaType< 18829252 > {
public:
	typedef osgParticle::rangev2 type;
	
};

template<>
class LunaType< 18829253 > {
public:
	typedef osgParticle::rangev3 type;
	
};

template<>
class LunaType< 18829254 > {
public:
	typedef osgParticle::rangev4 type;
	
};

template<>
class LunaType< 60781756 > {
public:
	typedef osgParticle::DomainOperator::Domain type;
	
};

template<>
class LunaType< 81629555 > {
public:
	typedef osgParticle::Particle type;
	
};

template<>
class LunaType< 61073220 > {
public:
	typedef osgParticle::ParticleSystem::ScopedReadLock type;
	
};

template<>
class LunaType< 90677436 > {
public:
	typedef osgParticle::ParticleSystem::ScopedWriteLock type;
	
};

template<>
class LunaType< 30297084 > {
public:
	typedef osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap type;
	
};

template<>
class LunaType< 4475636 > {
public:
	typedef osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell type;
	
};

template<>
class LunaType< 87684634 > {
public:
	typedef osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime type;
	
};

template<>
class LunaType< 17799265 > {
public:
	typedef osgText::FontResolution type;
	
};

template<>
class LunaType< 5080884 > {
public:
	typedef osgText::Font::GlyphTextureList type;
	
};

template<>
class LunaType< 42086333 > {
public:
	typedef osgText::String type;
	
};

template<>
class LunaType< 78061823 > {
public:
	typedef osgText::Bevel::Vertices type;
	
};

template<>
class LunaType< 48619134 > {
public:
	typedef osgText::Text::TextureGlyphQuadMap type;
	
};

template<>
class LunaType< 89190250 > {
public:
	typedef osgText::Text::GlyphQuads type;
	
};

template<>
class LunaType< 3878690 > {
public:
	typedef osgText::Text::GlyphQuads::Glyphs type;
	
};

template<>
class LunaType< 43001465 > {
public:
	typedef osgText::Text::GlyphQuads::LineNumbers type;
	
};

template<>
class LunaType< 46933791 > {
public:
	typedef osgText::Text::GlyphQuads::Coords2 type;
	
};

template<>
class LunaType< 46933792 > {
public:
	typedef osgText::Text::GlyphQuads::Coords3 type;
	
};

template<>
class LunaType< 72230542 > {
public:
	typedef osgText::Text::GlyphQuads::TexCoords type;
	
};

template<>
class LunaType< 26979605 > {
public:
	typedef osgText::Text::GlyphQuads::ColorCoords type;
	
};

template<>
class LunaType< 91536996 > {
public:
	typedef osgUtil::DelaunayTriangulator::linelist type;
	
};

template<>
class LunaType< 96401270 > {
public:
	typedef osgUtil::DrawElementTypeSimplifier type;
	
};

template<>
class LunaType< 4191371 > {
public:
	typedef osgUtil::dereference_less type;
	
};

template<>
class LunaType< 21815425 > {
public:
	typedef osgUtil::dereference_clear type;
	
};

template<>
class LunaType< 81832682 > {
public:
	typedef osgUtil::EdgeCollector type;
	
};

template<>
class LunaType< 655286 > {
public:
	typedef osgUtil::EdgeCollector::IndexArrayList type;
	
};

template<>
class LunaType< 50528172 > {
public:
	typedef osgUtil::EdgeCollector::EdgeSet type;
	
};

template<>
class LunaType< 66168244 > {
public:
	typedef osgUtil::EdgeCollector::EdgeList type;
	
};

template<>
class LunaType< 55216760 > {
public:
	typedef osgUtil::EdgeCollector::EdgeloopList type;
	
};

template<>
class LunaType< 34110025 > {
public:
	typedef osgUtil::EdgeCollector::PointSet type;
	
};

template<>
class LunaType< 57205837 > {
public:
	typedef osgUtil::EdgeCollector::PointList type;
	
};

template<>
class LunaType< 52419701 > {
public:
	typedef osgUtil::EdgeCollector::TriangleList type;
	
};

template<>
class LunaType< 62987903 > {
public:
	typedef osgUtil::EdgeCollector::TriangleSet type;
	
};

template<>
class LunaType< 62982009 > {
public:
	typedef osgUtil::EdgeCollector::TriangleMap type;
	
};

template<>
class LunaType< 70884799 > {
public:
	typedef osgUtil::StateToCompile::DrawableSet type;
	
};

template<>
class LunaType< 88961844 > {
public:
	typedef osgUtil::StateToCompile::StateSetSet type;
	
};

template<>
class LunaType< 41341545 > {
public:
	typedef osgUtil::StateToCompile::TextureSet type;
	
};

template<>
class LunaType< 13242464 > {
public:
	typedef osgUtil::StateToCompile::ProgramSet type;
	
};

template<>
class LunaType< 99133557 > {
public:
	typedef osgUtil::IncrementalCompileOperation::Contexts type;
	
};

template<>
class LunaType< 67276006 > {
public:
	typedef osgUtil::IncrementalCompileOperation::ContextSet type;
	
};

template<>
class LunaType< 37124597 > {
public:
	typedef osgUtil::IncrementalCompileOperation::CompileSets type;
	
};

template<>
class LunaType< 36919874 > {
public:
	typedef osgUtil::IncrementalCompileOperation::CompileList type;
	
};

template<>
class LunaType< 95636375 > {
public:
	typedef osgUtil::IncrementalCompileOperation::CompileList::CompileOps type;
	
};

template<>
class LunaType< 82923186 > {
public:
	typedef osgUtil::IncrementalCompileOperation::CompileSet::CompileMap type;
	
};

template<>
class LunaType< 66660324 > {
public:
	typedef osgUtil::IntersectorGroup::Intersectors type;
	
};

template<>
class LunaType< 16095945 > {
public:
	typedef osgUtil::Hit type;
	
};

template<>
class LunaType< 26842661 > {
public:
	typedef osgUtil::Hit::VecIndexList type;
	
};

template<>
class LunaType< 19574398 > {
public:
	typedef osgUtil::LineSegmentIntersector::Intersections type;
	
};

template<>
class LunaType< 74825011 > {
public:
	typedef osgUtil::LineSegmentIntersector::Intersection type;
	
};

template<>
class LunaType< 24112391 > {
public:
	typedef osgUtil::LineSegmentIntersector::Intersection::IndexList type;
	
};

template<>
class LunaType< 81829436 > {
public:
	typedef osgUtil::LineSegmentIntersector::Intersection::RatioList type;
	
};

template<>
class LunaType< 43037357 > {
public:
	typedef osgUtil::GeometryCollector::GeometryList type;
	
};

template<>
class LunaType< 12139482 > {
public:
	typedef osgUtil::AddRangeOperator type;
	
};

template<>
class LunaType< 72996634 > {
public:
	typedef osgUtil::MultiplyRangeOperator type;
	
};

template<>
class LunaType< 85233381 > {
public:
	typedef osgUtil::Optimizer type;
	
};

template<>
class LunaType< 76958174 > {
public:
	typedef osgUtil::PerlinNoise type;
	
};

template<>
class LunaType< 23612133 > {
public:
	typedef osgUtil::PlaneIntersector::Intersections type;
	
};

template<>
class LunaType< 761678 > {
public:
	typedef osgUtil::PlaneIntersector::Intersection type;
	
};

template<>
class LunaType< 1808182 > {
public:
	typedef osgUtil::PlaneIntersector::Intersection::Polyline type;
	
};

template<>
class LunaType< 12610647 > {
public:
	typedef osgUtil::PlaneIntersector::Intersection::Attributes type;
	
};

template<>
class LunaType< 63717560 > {
public:
	typedef osgUtil::PolytopeIntersector::Intersections type;
	
};

template<>
class LunaType< 31087672 > {
public:
	typedef osgUtil::PolytopeIntersector::Intersection type;
	
};

template<>
class LunaType< 92627939 > {
public:
	typedef osgUtil::PositionalStateContainer::AttrMatrixPair type;
	
};

template<>
class LunaType< 92516775 > {
public:
	typedef osgUtil::PositionalStateContainer::AttrMatrixList type;
	
};

template<>
class LunaType< 42744840 > {
public:
	typedef osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap type;
	
};

template<>
class LunaType< 21382558 > {
public:
	typedef osgUtil::RenderBin::RenderLeafList type;
	
};

template<>
class LunaType< 60103097 > {
public:
	typedef osgUtil::RenderBin::StateGraphList type;
	
};

template<>
class LunaType< 38528519 > {
public:
	typedef osgUtil::RenderBin::RenderBinList type;
	
};

template<>
class LunaType< 25782964 > {
public:
	typedef osgUtil::RenderStage::Attachment type;
	
};

template<>
class LunaType< 42545431 > {
public:
	typedef osgUtil::SceneGraphBuilder type;
	
};

template<>
class LunaType< 11745068 > {
public:
	typedef osgUtil::ShaderGenCache::StateSetMap type;
	
};

template<>
class LunaType< 12058436 > {
public:
	typedef osgUtil::Simplifier::IndexList type;
	
};

template<>
class LunaType< 8678160 > {
public:
	typedef osgUtil::StateGraph::ChildList type;
	
};

template<>
class LunaType< 32098161 > {
public:
	typedef osgUtil::StateGraph::LeafList type;
	
};

template<>
class LunaType< 95996950 > {
public:
	typedef osgUtil::Statistics type;
	
};

template<>
class LunaType< 74391787 > {
public:
	typedef osgUtil::Statistics::PrimitiveValueMap type;
	
};

template<>
class LunaType< 11573909 > {
public:
	typedef osgUtil::Statistics::PrimitiveCountMap type;
	
};

template<>
class LunaType< 22793184 > {
public:
	typedef osgUtil::StatsVisitor::NodeSet type;
	
};

template<>
class LunaType< 41381585 > {
public:
	typedef osgUtil::StatsVisitor::DrawableSet type;
	
};

template<>
class LunaType< 77774778 > {
public:
	typedef osgUtil::StatsVisitor::StateSetSet type;
	
};

template<>
class LunaType< 51540588 > {
public:
	typedef osgViewer::GraphicsWindow::Views type;
	
};

template<>
class LunaType< 30766822 > {
public:
	typedef osgViewer::GraphicsWindowFunctionProxy type;
	
};

template<>
class LunaType< 62378713 > {
public:
	typedef osgViewer::View::EventHandlers type;
	
};

template<>
class LunaType< 18740017 > {
public:
	typedef osgViewer::ViewerBase::Cameras type;
	
};

template<>
class LunaType< 48105087 > {
public:
	typedef osgViewer::ViewerBase::Contexts type;
	
};

template<>
class LunaType< 98734151 > {
public:
	typedef osgViewer::ViewerBase::Windows type;
	
};

template<>
class LunaType< 11304538 > {
public:
	typedef osgViewer::ViewerBase::Threads type;
	
};

template<>
class LunaType< 32227808 > {
public:
	typedef osgViewer::ViewerBase::OperationThreads type;
	
};

template<>
class LunaType< 98997480 > {
public:
	typedef osgViewer::ViewerBase::Scenes type;
	
};

template<>
class LunaType< 2917259 > {
public:
	typedef osgViewer::ViewerBase::Views type;
	
};

template<>
class LunaType< 77972206 > {
public:
	typedef std::istream type;
	
};

template<>
class LunaType< 2993706 > {
public:
	typedef std::ostream type;
	
};

template<>
class LunaType< 57514973 > {
public:
	typedef std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > type;
	
};

template<>
class LunaType< 27834872 > {
public:
	typedef std::vector< unsigned int > type;
	
};

template<>
class LunaType< 7273346 > {
public:
	typedef std::vector< osgGA::GUIEventAdapter::TouchData::TouchPoint > type;
	
};

template<>
class LunaType< 46527738 > {
public:
	typedef osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > type;
	
};

template<>
class LunaType< 72312551 > {
public:
	typedef osg::TemplateIndexArray< short, osg::Array::ShortArrayType, 1, GL_SHORT > type;
	
};

template<>
class LunaType< 77568465 > {
public:
	typedef osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > type;
	
};

template<>
class LunaType< 76345736 > {
public:
	typedef osg::TemplateIndexArray< unsigned char, osg::Array::UByteArrayType, 1, GL_UNSIGNED_BYTE > type;
	
};

template<>
class LunaType< 59968751 > {
public:
	typedef osg::TemplateIndexArray< unsigned short, osg::Array::UShortArrayType, 1, GL_UNSIGNED_SHORT > type;
	
};

template<>
class LunaType< 14674410 > {
public:
	typedef osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > type;
	
};

template<>
class LunaType< 66705573 > {
public:
	typedef osg::TemplateArray< float, osg::Array::FloatArrayType, 1, GL_FLOAT > type;
	
};

template<>
class LunaType< 40646071 > {
public:
	typedef osg::TemplateArray< osg::Vec4ub, osg::Array::Vec4ubArrayType, 4, GL_UNSIGNED_BYTE > type;
	
};

template<>
class LunaType< 38996958 > {
public:
	typedef osg::TemplateArray< osg::Vec2s, osg::Array::Vec2sArrayType, 2, GL_SHORT > type;
	
};

template<>
class LunaType< 16762640 > {
public:
	typedef osg::TemplateArray< osg::Vec3s, osg::Array::Vec3sArrayType, 3, GL_SHORT > type;
	
};

template<>
class LunaType< 18397997 > {
public:
	typedef osg::TemplateArray< osg::Vec4s, osg::Array::Vec4sArrayType, 4, GL_SHORT > type;
	
};

template<>
class LunaType< 66655983 > {
public:
	typedef osg::TemplateArray< osg::Vec2b, osg::Array::Vec2bArrayType, 2, GL_BYTE > type;
	
};

template<>
class LunaType< 49027762 > {
public:
	typedef osg::TemplateArray< osg::Vec3b, osg::Array::Vec3bArrayType, 3, GL_BYTE > type;
	
};

template<>
class LunaType< 75159211 > {
public:
	typedef osg::TemplateArray< osg::Vec4b, osg::Array::Vec4bArrayType, 4, GL_BYTE > type;
	
};

template<>
class LunaType< 14704447 > {
public:
	typedef osg::TemplateArray< double, osg::Array::DoubleArrayType, 1, 0x140A > type;
	
};

template<>
class LunaType< 88202160 > {
public:
	typedef osg::TemplateArray< osg::Vec2d, osg::Array::Vec2dArrayType, 2, 0x140A > type;
	
};

template<>
class LunaType< 18847939 > {
public:
	typedef osg::TemplateArray< osg::Vec3d, osg::Array::Vec3dArrayType, 3, 0x140A > type;
	
};

template<>
class LunaType< 21777619 > {
public:
	typedef osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > type;
	
};

template<>
class LunaType< 76760649 > {
public:
	typedef osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > type;
	
};

template<>
class LunaType< 41229192 > {
public:
	typedef osg::BoundingBoxImpl< osg::Vec3f > type;
	
};

template<>
class LunaType< 41227270 > {
public:
	typedef osg::BoundingBoxImpl< osg::Vec3d > type;
	
};

template<>
class LunaType< 65872657 > {
public:
	typedef osg::BoundingSphereImpl< osg::Vec3f > type;
	
};

template<>
class LunaType< 65870735 > {
public:
	typedef osg::BoundingSphereImpl< osg::Vec3d > type;
	
};

template<>
class LunaType< 13747477 > {
public:
	typedef std::list< osg::ref_ptr< osg::GLBufferObject > > type;
	
};

template<>
class LunaType< 95974838 > {
public:
	typedef std::pair< double, double > type;
	
};

template<>
class LunaType< 88937738 > {
public:
	typedef std::vector< osg::ref_ptr< osg::Node > > type;
	
};

template<>
class LunaType< 35913554 > {
public:
	typedef std::vector< osg::ref_ptr< osg::Image > > type;
	
};

template<>
class LunaType< 49500314 > {
public:
	typedef osg::MixinVector< int > type;
	
};

template<>
class LunaType< 78221228 > {
public:
	typedef osg::MixinVector< unsigned char > type;
	
};

template<>
class LunaType< 37920625 > {
public:
	typedef osg::MixinVector< unsigned short > type;
	
};

template<>
class LunaType< 24387920 > {
public:
	typedef osg::MixinVector< unsigned int > type;
	
};

template<>
class LunaType< 17530095 > {
public:
	typedef std::vector< osg::ShaderComponent * > type;
	
};

template<>
class LunaType< 75920513 > {
public:
	typedef std::vector< osg::ShadowVolumeOccluder > type;
	
};

template<>
class LunaType< 23566627 > {
public:
	typedef osg::Matrix2Template< float > type;
	
};

template<>
class LunaType< 36925025 > {
public:
	typedef osg::Matrix2x3Template< float > type;
	
};

template<>
class LunaType< 61250437 > {
public:
	typedef osg::Matrix2x4Template< float > type;
	
};

template<>
class LunaType< 64512237 > {
public:
	typedef osg::Matrix3x2Template< float > type;
	
};

template<>
class LunaType< 66344120 > {
public:
	typedef osg::Matrix3x4Template< float > type;
	
};

template<>
class LunaType< 67198576 > {
public:
	typedef osg::Matrix4x2Template< float > type;
	
};

template<>
class LunaType< 40016085 > {
public:
	typedef osg::Matrix4x3Template< float > type;
	
};

template<>
class LunaType< 40388721 > {
public:
	typedef osg::Matrix2Template< double > type;
	
};

template<>
class LunaType< 54499000 > {
public:
	typedef osg::Matrix2x3Template< double > type;
	
};

template<>
class LunaType< 8586516 > {
public:
	typedef osg::Matrix2x4Template< double > type;
	
};

template<>
class LunaType< 9703245 > {
public:
	typedef osg::Matrix3x2Template< double > type;
	
};

template<>
class LunaType< 66491618 > {
public:
	typedef osg::Matrix3x4Template< double > type;
	
};

template<>
class LunaType< 92978793 > {
public:
	typedef osg::Matrix4x2Template< double > type;
	
};

template<>
class LunaType< 50322789 > {
public:
	typedef osg::Matrix4x3Template< double > type;
	
};

template<>
class LunaType< 80514588 > {
public:
	typedef osg::TemplateValueObject< std::string > type;
	
};

template<>
class LunaType< 18260122 > {
public:
	typedef osg::TemplateValueObject< bool > type;
	
};

template<>
class LunaType< 40013318 > {
public:
	typedef osg::TemplateValueObject< char > type;
	
};

template<>
class LunaType< 53494760 > {
public:
	typedef osg::TemplateValueObject< unsigned char > type;
	
};

template<>
class LunaType< 53475946 > {
public:
	typedef osg::TemplateValueObject< short > type;
	
};

template<>
class LunaType< 71399125 > {
public:
	typedef osg::TemplateValueObject< unsigned short > type;
	
};

template<>
class LunaType< 45736059 > {
public:
	typedef osg::TemplateValueObject< int > type;
	
};

template<>
class LunaType< 84880641 > {
public:
	typedef osg::TemplateValueObject< unsigned int > type;
	
};

template<>
class LunaType< 29941919 > {
public:
	typedef osg::TemplateValueObject< float > type;
	
};

template<>
class LunaType< 38023804 > {
public:
	typedef osg::TemplateValueObject< double > type;
	
};

template<>
class LunaType< 85635457 > {
public:
	typedef osg::TemplateValueObject< osg::Vec2f > type;
	
};

template<>
class LunaType< 85665248 > {
public:
	typedef osg::TemplateValueObject< osg::Vec3f > type;
	
};

template<>
class LunaType< 85695039 > {
public:
	typedef osg::TemplateValueObject< osg::Vec4f > type;
	
};

template<>
class LunaType< 85633535 > {
public:
	typedef osg::TemplateValueObject< osg::Vec2d > type;
	
};

template<>
class LunaType< 85663326 > {
public:
	typedef osg::TemplateValueObject< osg::Vec3d > type;
	
};

template<>
class LunaType< 85693117 > {
public:
	typedef osg::TemplateValueObject< osg::Vec4d > type;
	
};

template<>
class LunaType< 45362523 > {
public:
	typedef osg::TemplateValueObject< osg::Quat > type;
	
};

template<>
class LunaType< 60958792 > {
public:
	typedef osg::TemplateValueObject< osg::Plane > type;
	
};

template<>
class LunaType< 54002088 > {
public:
	typedef osg::TemplateValueObject< osg::Matrixf > type;
	
};

template<>
class LunaType< 54000166 > {
public:
	typedef osg::TemplateValueObject< osg::Matrixd > type;
	
};

template<>
class LunaType< 21911421 > {
public:
	typedef std::vector< osg::StateSet const * > type;
	
};

template<>
class LunaType< 75051431 > {
public:
	typedef std::map< double, osg::AnimationPath::ControlPoint > type;
	
};

template<>
class LunaType< 29293820 > {
public:
	typedef std::map< std::string, std::string > type;
	
};

template<>
class LunaType< 56481134 > {
public:
	typedef std::map< std::string, osg::ArgumentParser::ErrorSeverity > type;
	
};

template<>
class LunaType< 30220088 > {
public:
	typedef std::vector< osg::Vec3f > type;
	
};

template<>
class LunaType< 51751322 > {
public:
	typedef std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > type;
	
};

template<>
class LunaType< 53517213 > {
public:
	typedef std::vector< osg::ref_ptr< osg::ClipPlane > > type;
	
};

template<>
class LunaType< 28893306 > {
public:
	typedef std::set< osg::ShadowVolumeOccluder > type;
	
};

template<>
class LunaType< 35991211 > {
public:
	typedef std::vector< osg::ConvexPlanarPolygon > type;
	
};

template<>
class LunaType< 88384434 > {
public:
	typedef std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > type;
	
};

template<>
class LunaType< 42640190 > {
public:
	typedef std::vector< osg::CullingSet::StateFrustumPair > type;
	
};

template<>
class LunaType< 3779006 > {
public:
	typedef std::vector< osg::CullingSet > type;
	
};

template<>
class LunaType< 62448773 > {
public:
	typedef std::pair< unsigned int, const osg::Referenced * > type;
	
};

template<>
class LunaType< 79657515 > {
public:
	typedef std::list< osg::DeleteHandler::FrameNumberObjectPair > type;
	
};

template<>
class LunaType< 83621066 > {
public:
	typedef std::map< unsigned int, osg::Vec4f > type;
	
};

template<>
class LunaType< 60758143 > {
public:
	typedef std::map< unsigned int, osg::Matrixd > type;
	
};

template<>
class LunaType< 33736258 > {
public:
	typedef std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > type;
	
};

template<>
class LunaType< 68126022 > {
public:
	typedef std::vector< osg::ref_ptr< osg::Drawable > > type;
	
};

template<>
class LunaType< 40737742 > {
public:
	typedef std::vector< osg::Geometry::ArrayData > type;
	
};

template<>
class LunaType< 41652406 > {
public:
	typedef std::vector< osg::ref_ptr< osg::PrimitiveSet > > type;
	
};

template<>
class LunaType< 44000933 > {
public:
	typedef std::vector< osg::Array * > type;
	
};

template<>
class LunaType< 66006148 > {
public:
	typedef std::vector< osg::DrawElements * > type;
	
};

template<>
class LunaType< 51480349 > {
public:
	typedef std::vector< osg::GraphicsContext::ScreenSettings > type;
	
};

template<>
class LunaType< 81169401 > {
public:
	typedef std::vector< osg::GraphicsContext * > type;
	
};

template<>
class LunaType< 67665559 > {
public:
	typedef std::list< osg::ref_ptr< osg::Operation > > type;
	
};

template<>
class LunaType< 29668977 > {
public:
	typedef std::list< osg::Camera * > type;
	
};

template<>
class LunaType< 69751145 > {
public:
	typedef std::vector< osg::ref_ptr< osg::Image::DimensionsChangedCallback > > type;
	
};

template<>
class LunaType< 72499659 > {
public:
	typedef std::vector< osg::ImageSequence::ImageData > type;
	
};

template<>
class LunaType< 64675596 > {
public:
	typedef std::vector< osg::ref_ptr< osg::AudioStream > > type;
	
};

template<>
class LunaType< 63704215 > {
public:
	typedef std::vector< osg::KdTree::LineSegmentIntersection > type;
	
};

template<>
class LunaType< 11129999 > {
public:
	typedef std::vector< osg::KdTree::KdNode > type;
	
};

template<>
class LunaType< 95925804 > {
public:
	typedef std::vector< osg::KdTree::Triangle > type;
	
};

template<>
class LunaType< 3653432 > {
public:
	typedef std::pair< float, float > type;
	
};

template<>
class LunaType< 15056692 > {
public:
	typedef std::vector< osg::LOD::MinMaxPair > type;
	
};

template<>
class LunaType< 91690910 > {
public:
	typedef std::vector< osg::Group * > type;
	
};

template<>
class LunaType< 95416160 > {
public:
	typedef std::vector< std::string > type;
	
};

template<>
class LunaType< 32905741 > {
public:
	typedef std::set< osg::Observer * > type;
	
};

template<>
class LunaType< 97507829 > {
public:
	typedef std::set< osg::OperationThread * > type;
	
};

template<>
class LunaType< 912958 > {
public:
	typedef std::vector< osg::PagedLOD::PerRangeData > type;
	
};

template<>
class LunaType< 4254188 > {
public:
	typedef osg::fast_back_stack< unsigned int > type;
	
};

template<>
class LunaType< 72783721 > {
public:
	typedef std::map< std::string, unsigned int > type;
	
};

template<>
class LunaType< 35507604 > {
public:
	typedef std::map< unsigned int, osg::Program::ActiveVarInfo > type;
	
};

template<>
class LunaType< 32685379 > {
public:
	typedef std::map< std::string, osg::Program::ActiveVarInfo > type;
	
};

template<>
class LunaType< 8358127 > {
public:
	typedef std::map< std::string, osg::Program::UniformBlockInfo > type;
	
};

template<>
class LunaType< 49716686 > {
public:
	typedef std::multimap< float, std::string > type;
	
};

template<>
class LunaType< 97623200 > {
public:
	typedef std::vector< const osg::Shader * > type;
	
};

template<>
class LunaType< 14490510 > {
public:
	typedef std::vector< osg::Polytope > type;
	
};

template<>
class LunaType< 37696109 > {
public:
	typedef std::vector< osg::ref_ptr< osg::Shape > > type;
	
};

template<>
class LunaType< 60202548 > {
public:
	typedef std::pair< osg::StateAttribute::Type, unsigned int > type;
	
};

template<>
class LunaType< 63753525 > {
public:
	typedef std::vector< osg::StateSet * > type;
	
};

template<>
class LunaType< 57488909 > {
public:
	typedef std::vector< osg::Object * > type;
	
};

template<>
class LunaType< 50375310 > {
public:
	typedef std::map< unsigned int, unsigned int > type;
	
};

template<>
class LunaType< 36696863 > {
public:
	typedef std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > type;
	
};

template<>
class LunaType< 94158825 > {
public:
	typedef std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > type;
	
};

template<>
class LunaType< 68848182 > {
public:
	typedef std::vector< osg::StateSet::ModeList > type;
	
};

template<>
class LunaType< 27505286 > {
public:
	typedef std::vector< osg::StateSet::AttributeList > type;
	
};

template<>
class LunaType< 61531030 > {
public:
	typedef std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > type;
	
};

template<>
class LunaType< 97138515 > {
public:
	typedef std::map< std::string, osg::StateSet::RefUniformPair > type;
	
};

template<>
class LunaType< 50211746 > {
public:
	typedef std::map< std::string, double > type;
	
};

template<>
class LunaType< 12653154 > {
public:
	typedef std::vector< osg::Stats::AttributeMap > type;
	
};

template<>
class LunaType< 59271773 > {
public:
	typedef std::map< std::string, bool > type;
	
};

template<>
class LunaType< 61721661 > {
public:
	typedef std::vector< bool > type;
	
};

template<>
class LunaType< 56376547 > {
public:
	typedef std::list< osg::ref_ptr< osg::Texture::TextureObject > > type;
	
};

template<>
class LunaType< 55588956 > {
public:
	typedef std::map< float, osg::Vec4f > type;
	
};

template<>
class LunaType< 79889541 > {
public:
	typedef std::deque< std::string > type;
	
};

template<>
class LunaType< 69347293 > {
public:
	typedef std::list< std::string > type;
	
};

template<>
class LunaType< 14972349 > {
public:
	typedef std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > type;
	
};

template<>
class LunaType< 79134225 > {
public:
	typedef std::vector< osg::ref_ptr< osgDB::DatabaseRevision > > type;
	
};

template<>
class LunaType< 49100922 > {
public:
	typedef std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > type;
	
};

template<>
class LunaType< 87953072 > {
public:
	typedef std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > type;
	
};

template<>
class LunaType< 14435376 > {
public:
	typedef std::map< unsigned int, osg::ref_ptr< osg::Array > > type;
	
};

template<>
class LunaType< 22678240 > {
public:
	typedef std::map< unsigned int, osg::ref_ptr< osg::Object > > type;
	
};

template<>
class LunaType< 81767982 > {
public:
	typedef std::vector< osg::ref_ptr< osgDB::BaseSerializer > > type;
	
};

template<>
class LunaType< 18642457 > {
public:
	typedef std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > type;
	
};

template<>
class LunaType< 75452281 > {
public:
	typedef std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > type;
	
};

template<>
class LunaType< 45885100 > {
public:
	typedef std::map< std::string, osg::ref_ptr< osgDB::BaseCompressor > > type;
	
};

template<>
class LunaType< 78063648 > {
public:
	typedef std::map< std::string, osgDB::IntLookup > type;
	
};

template<>
class LunaType< 70617331 > {
public:
	typedef std::map< const osg::Array *, unsigned int > type;
	
};

template<>
class LunaType< 66769651 > {
public:
	typedef std::map< const osg::Object *, unsigned int > type;
	
};

template<>
class LunaType< 16674959 > {
public:
	typedef std::vector< osg::ref_ptr< osgDB::ReaderWriter > > type;
	
};

template<>
class LunaType< 34672077 > {
public:
	typedef std::vector< osg::ref_ptr< osgDB::ImageProcessor > > type;
	
};

template<>
class LunaType< 16309392 > {
public:
	typedef std::map< int, std::string > type;
	
};

template<>
class LunaType< 42497827 > {
public:
	typedef std::vector< osg::ref_ptr< osgDB::XmlNode > > type;
	
};

template<>
class LunaType< 54803080 > {
public:
	typedef std::vector< osg::ref_ptr< osg::CameraView > > type;
	
};

template<>
class LunaType< 1490680 > {
public:
	typedef std::list< osg::ref_ptr< osgGA::GUIEventAdapter > > type;
	
};

template<>
class LunaType< 95430599 > {
public:
	typedef std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > type;
	
};

template<>
class LunaType< 83573716 > {
public:
	typedef std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > type;
	
};

template<>
class LunaType< 42175463 > {
public:
	typedef osgParticle::range< float > type;
	
};

template<>
class LunaType< 67760540 > {
public:
	typedef osgParticle::range< osg::Vec2f > type;
	
};

template<>
class LunaType< 67790331 > {
public:
	typedef osgParticle::range< osg::Vec3f > type;
	
};

template<>
class LunaType< 67820122 > {
public:
	typedef osgParticle::range< osg::Vec4f > type;
	
};

template<>
class LunaType< 98510513 > {
public:
	typedef std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > type;
	
};

template<>
class LunaType< 52265949 > {
public:
	typedef std::pair< unsigned int, unsigned int > type;
	
};

template<>
class LunaType< 41678074 > {
public:
	typedef std::vector< osg::ref_ptr< osgText::GlyphTexture > > type;
	
};

template<>
class LunaType< 30190297 > {
public:
	typedef std::vector< osg::Vec2f > type;
	
};

template<>
class LunaType< 99215215 > {
public:
	typedef std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > type;
	
};

template<>
class LunaType< 57567263 > {
public:
	typedef std::vector< osgText::Glyph * > type;
	
};

template<>
class LunaType< 30249879 > {
public:
	typedef std::vector< osg::Vec4f > type;
	
};

template<>
class LunaType< 90059382 > {
public:
	typedef std::vector< osg::ref_ptr< osgUtil::DelaunayConstraint > > type;
	
};

template<>
class LunaType< 91716752 > {
public:
	typedef std::list< osg::ref_ptr< osg::UIntArray > > type;
	
};

template<>
class LunaType< 17405453 > {
public:
	typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less > type;
	
};

template<>
class LunaType< 83036857 > {
public:
	typedef std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > > type;
	
};

template<>
class LunaType< 14213870 > {
public:
	typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less > type;
	
};

template<>
class LunaType< 26981281 > {
public:
	typedef std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > > type;
	
};

template<>
class LunaType< 17460986 > {
public:
	typedef std::list< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > type;
	
};

template<>
class LunaType< 71050428 > {
public:
	typedef std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > type;
	
};

template<>
class LunaType< 18974895 > {
public:
	typedef std::map< osg::ref_ptr< osgUtil::EdgeCollector::Triangle >, unsigned int, osgUtil::dereference_less > type;
	
};

template<>
class LunaType< 76374875 > {
public:
	typedef std::set< osg::Drawable * > type;
	
};

template<>
class LunaType< 97002577 > {
public:
	typedef std::set< osg::StateSet * > type;
	
};

template<>
class LunaType< 55546203 > {
public:
	typedef std::set< osg::Texture * > type;
	
};

template<>
class LunaType< 89238351 > {
public:
	typedef std::set< osg::Program * > type;
	
};

template<>
class LunaType< 37168712 > {
public:
	typedef std::set< osg::GraphicsContext * > type;
	
};

template<>
class LunaType< 19762195 > {
public:
	typedef std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > > type;
	
};

template<>
class LunaType< 51869738 > {
public:
	typedef std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileOp > > type;
	
};

template<>
class LunaType< 4029618 > {
public:
	typedef std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > type;
	
};

template<>
class LunaType< 65377831 > {
public:
	typedef std::vector< osg::ref_ptr< osgUtil::Intersector > > type;
	
};

template<>
class LunaType< 9645394 > {
public:
	typedef std::multiset< osgUtil::LineSegmentIntersector::Intersection > type;
	
};

template<>
class LunaType< 32154383 > {
public:
	typedef std::set< osg::Geometry * > type;
	
};

template<>
class LunaType< 22531800 > {
public:
	typedef std::vector< osgUtil::PlaneIntersector::Intersection > type;
	
};

template<>
class LunaType< 94863276 > {
public:
	typedef std::set< osgUtil::PolytopeIntersector::Intersection > type;
	
};

template<>
class LunaType< 59166565 > {
public:
	typedef std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > type;
	
};

template<>
class LunaType< 94794184 > {
public:
	typedef std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > type;
	
};

template<>
class LunaType< 88896285 > {
public:
	typedef std::map< unsigned int, osgUtil::PositionalStateContainer::AttrMatrixList > type;
	
};

template<>
class LunaType< 19090615 > {
public:
	typedef std::vector< osgUtil::RenderLeaf * > type;
	
};

template<>
class LunaType< 53124285 > {
public:
	typedef std::vector< osgUtil::StateGraph * > type;
	
};

template<>
class LunaType< 85481090 > {
public:
	typedef std::map< int, osg::ref_ptr< osgUtil::RenderBin > > type;
	
};

template<>
class LunaType< 83064258 > {
public:
	typedef std::map< int, osg::ref_ptr< osg::StateSet > > type;
	
};

template<>
class LunaType< 4476781 > {
public:
	typedef std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > type;
	
};

template<>
class LunaType< 49937795 > {
public:
	typedef std::vector< osg::ref_ptr< osgUtil::RenderLeaf > > type;
	
};

template<>
class LunaType< 14759504 > {
public:
	typedef std::map< unsigned int, osgUtil::Statistics::PrimitivePair > type;
	
};

template<>
class LunaType< 73927809 > {
public:
	typedef std::set< osg::Node * > type;
	
};

template<>
class LunaType< 70560566 > {
public:
	typedef std::list< osgViewer::View * > type;
	
};

template<>
class LunaType< 69446139 > {
public:
	typedef std::list< osg::ref_ptr< osgGA::GUIEventHandler > > type;
	
};

template<>
class LunaType< 26989213 > {
public:
	typedef std::vector< osg::Camera * > type;
	
};

template<>
class LunaType< 20911347 > {
public:
	typedef std::vector< osgViewer::GraphicsWindow * > type;
	
};

template<>
class LunaType< 9185441 > {
public:
	typedef std::vector< OpenThreads::Thread * > type;
	
};

template<>
class LunaType< 51846713 > {
public:
	typedef std::vector< osg::OperationThread * > type;
	
};

template<>
class LunaType< 36779322 > {
public:
	typedef std::vector< osgViewer::Scene * > type;
	
};

template<>
class LunaType< 21902908 > {
public:
	typedef std::vector< osgViewer::View * > type;
	
};

template<>
class LunaType< 89957242 > {
public:
	typedef std::vector< osg::VertexAttribAlias > type;
	
};

template<>
class LunaType< 13757199 > {
public:
	typedef std::vector< osg::State::AttributePair > type;
	
};

template<>
class LunaType< 91520745 > {
public:
	typedef std::vector< osgUtil::Hit > type;
	
};

template<>
class LunaType< 49465324 > {
public:
	typedef std::map< const osg::LineSegment *, osgUtil::IntersectVisitor::HitList > type;
	
};

template<>
class LunaType< 69153813 > {
public:
	typedef std::vector< osg::ref_ptr< osgUtil::Tessellator::Prim > > type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 4564820 > {
public:
	typedef std::vector< double > type;
	
};

template<>
class LunaType< 92299338 > {
public:
	typedef std::vector< int > type;
	
};


#endif


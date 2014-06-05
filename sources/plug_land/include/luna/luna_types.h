#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <ork/core/Object.h>
#include <ork/taskgraph/Task.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/producer/GraphProducer.h>
#include <proland/util/mfs.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/Graph.h>
#include <ork/render/Buffer.h>
#include <ork/render/FrameBuffer.h>
#include <proland/ui/BasicViewHandler.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/Margin.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/HydroFlowProducer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditGraphOrthoLayer.h>
#include <ork/resource/ResourceDescriptor.h>
#include <ork/resource/CompiledResourceLoader.h>
#include <ork/scenegraph/SetTargetTask.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/DrawRiversTask.h>
#include <proland/preprocess/terrain/AbstractTileCache.h>
#include <ork/resource/tinyxml.h>
#include <ork/util/Font.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/preprocess/trees/PreprocessTree.h>
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
#include <ork/taskgraph/TaskFactory.h>
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
#include <ork/taskgraph/Scheduler.h>
#include <ork/taskgraph/MultithreadScheduler.h>
#include <ork/taskgraph/TaskGraph.h>
#include <ork/ui/EventHandler.h>
#include <ork/ui/Window.h>
#include <ork/ui/GlutWindow.h>
#include <proland/math/seg2.h>
#include <proland/particles/ParticleLayer.h>
#include <proland/particles/LifeCycleParticleLayer.h>
#include <proland/particles/ParticleProducer.h>
#include <proland/particles/ParticleStorage.h>
#include <proland/particles/RandomParticleLayer.h>
#include <proland/particles/screen/ParticleGrid.h>
#include <proland/particles/screen/ScreenParticleLayer.h>
#include <proland/particles/terrain/FlowTile.h>
#include <proland/particles/terrain/TerrainParticleLayer.h>
#include <proland/particles/WorldParticleLayer.h>
#include <proland/producer/TileStorage.h>
#include <proland/producer/GPUTileStorage.h>
#include <proland/producer/ObjectTileStorage.h>
#include <proland/producer/TileCache.h>
#include <proland/producer/TileLayer.h>
#include <proland/producer/TileProducer.h>
#include <proland/terrain/Deformation.h>
#include <proland/terrain/CylindricalDeformation.h>
#include <proland/terrain/DrawTerrainTask.h>
#include <proland/terrain/ReadbackManager.h>
#include <proland/terrain/SphericalDeformation.h>
#include <proland/terrain/TerrainNode.h>
#include <proland/terrain/TerrainQuad.h>
#include <proland/terrain/TileSampler.h>
#include <proland/terrain/TileSamplerZ.h>
#include <proland/terrain/UpdateTerrainTask.h>
#include <proland/terrain/UpdateTileSamplersTask.h>
#include <proland/ui/EventRecorder.h>
#include <proland/ui/MousePositionHandler.h>
#include <proland/ui/SceneVisitor.h>
#include <proland/ui/twbar/DrawTweakBarTask.h>
#include <proland/ui/twbar/TweakBarHandler.h>
#include <proland/ui/twbar/TweakBarManager.h>
#include <proland/ui/twbar/TweakResource.h>
#include <proland/ui/twbar/TweakSceneGraph.h>
#include <proland/ui/twbar/TweakViewHandler.h>
#include <proland/util/TerrainViewController.h>
#include <proland/util/CylinderViewController.h>
#include <proland/util/PlanetViewController.h>
#include <proland/dem/CPUElevationProducer.h>
#include <proland/dem/ElevationProducer.h>
#include <proland/dem/NormalProducer.h>
#include <proland/dem/ResidualProducer.h>
#include <proland/ortho/EmptyOrthoLayer.h>
#include <proland/ortho/OrthoCPUProducer.h>
#include <proland/ortho/OrthoGPUProducer.h>
#include <proland/ortho/OrthoProducer.h>
#include <proland/ortho/TextureLayer.h>
#include <proland/preprocess/terrain/ApertureMipmap.h>
#include <proland/preprocess/terrain/ColorMipmap.h>
#include <proland/preprocess/terrain/HeightMipmap.h>
#include <proland/preprocess/terrain/Preprocess.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/atmo/proland/preprocess/atmo/PreprocessAtmo.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/ocean/proland/ocean/DrawOceanFFTTask.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/ocean/proland/ocean/DrawOceanTask.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/plants/DrawPlantsShadowTask.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/plants/DrawPlantsTask.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/plants/LccProducer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/plants/Plants.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/forest/proland/plants/PlantsProducer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/producer/CurveData.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/dem/ElevationCurveData.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/GraphListener.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/producer/CurveDataFactory.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/producer/GraphLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/dem/ElevationGraphLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/dem/RoadElevationLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/dem/WaterElevationLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/Area.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/CurvePart.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/BasicCurvePart.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/BasicGraph.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/ComposedMargin.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/Curve.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/FileReader.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/FileWriter.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/LazyArea.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/LazyCurve.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/LazyGraph.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/Node.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/LazyNode.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/LineCurvePart.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/producer/Tesselator.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/ortho/FieldsOrthoLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/ortho/ForestOrthoLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/ortho/LineOrthoLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/ortho/MaskOrthoLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/ortho/OrthoMargin.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/ortho/RoadOrthoLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/ortho/WaterOrthoLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/WaveTile.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/AnimatedPerlinWaveTile.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/graph/HydroCurve.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/graph/HydroGraph.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/graph/HydroGraphFactory.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/graph/LazyHydroCurve.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/graph/LazyHydroGraph.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/graph/LazyHydroGraphFactory.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/HydroFlowTile.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/PerlinWaveTile.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/UpdateRiversTask.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/ui/twbar/TweakRivers.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditorHandler.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditElevationProducer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditHydroGraphOrthoLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditOrthoCPUProducer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditOrthoProducer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditResidualProducer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/ui/twbar/TweakDemEditor.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/ui/twbar/TweakGraphLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/ui/twbar/TweakHydroGraphLayer.h>
#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/ui/twbar/TweakOrthoEditor.h>

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

// Class: proland::GraphProducer::GraphFactory
template<>
class LunaTraits< proland::GraphProducer::GraphFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::GraphProducer::GraphFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::GraphProducer::GraphFactory* obj);
	typedef ork::Object parent_t;
	typedef proland::GraphProducer::GraphFactory base_t;
	static luna_ConverterType converters[];
};

// Class: proland::GraphProducer::LazyGraphFactory
template<>
class LunaTraits< proland::GraphProducer::LazyGraphFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::GraphProducer::LazyGraphFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::GraphProducer::LazyGraphFactory* obj);
	typedef ork::Object parent_t;
	typedef proland::GraphProducer::LazyGraphFactory base_t;
	static luna_ConverterType converters[];
};

// Class: mfs_file
template<>
class LunaTraits< mfs_file > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static mfs_file* _bind_ctor(lua_State *L);
	static void _bind_dtor(mfs_file* obj);
	typedef mfs_file parent_t;
	typedef mfs_file base_t;
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

// Class: proland::BasicViewHandler::Position
template<>
class LunaTraits< proland::BasicViewHandler::Position > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::BasicViewHandler::Position* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::BasicViewHandler::Position* obj);
	typedef proland::BasicViewHandler::Position parent_t;
	typedef proland::BasicViewHandler::Position base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Margin
template<>
class LunaTraits< proland::Margin > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Margin* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Margin* obj);
	typedef proland::Margin parent_t;
	typedef proland::Margin base_t;
	static luna_ConverterType converters[];
};

// Class: proland::HydroFlowProducer::RiverMargin
template<>
class LunaTraits< proland::HydroFlowProducer::RiverMargin > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::HydroFlowProducer::RiverMargin* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::HydroFlowProducer::RiverMargin* obj);
	typedef proland::Margin parent_t;
	typedef proland::HydroFlowProducer::RiverMargin base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditGraphOrthoLayer::SelectionData
template<>
class LunaTraits< proland::EditGraphOrthoLayer::SelectionData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditGraphOrthoLayer::SelectionData* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditGraphOrthoLayer::SelectionData* obj);
	typedef proland::EditGraphOrthoLayer::SelectionData parent_t;
	typedef proland::EditGraphOrthoLayer::SelectionData base_t;
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

// Class: proland::DrawRiversTask::TerrainInfo
template<>
class LunaTraits< proland::DrawRiversTask::TerrainInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DrawRiversTask::TerrainInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DrawRiversTask::TerrainInfo* obj);
	typedef proland::DrawRiversTask::TerrainInfo parent_t;
	typedef proland::DrawRiversTask::TerrainInfo base_t;
	static luna_ConverterType converters[];
};

// Class: proland::AbstractTileCache::Tile
template<>
class LunaTraits< proland::AbstractTileCache::Tile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::AbstractTileCache::Tile* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::AbstractTileCache::Tile* obj);
	typedef proland::AbstractTileCache::Tile parent_t;
	typedef proland::AbstractTileCache::Tile base_t;
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

// Class: TwBar
template<>
class LunaTraits< TwBar > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static TwBar* _bind_ctor(lua_State *L);
	static void _bind_dtor(TwBar* obj);
	typedef TwBar parent_t;
	typedef TwBar base_t;
	static luna_ConverterType converters[];
};

// Class: proland::DrawRiversTask::vecParticle
template<>
class LunaTraits< proland::DrawRiversTask::vecParticle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DrawRiversTask::vecParticle* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DrawRiversTask::vecParticle* obj);
	typedef proland::DrawRiversTask::vecParticle parent_t;
	typedef proland::DrawRiversTask::vecParticle base_t;
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

// Class: proland::TreeMesh::Vertex
template<>
class LunaTraits< proland::TreeMesh::Vertex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TreeMesh::Vertex* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TreeMesh::Vertex* obj);
	typedef proland::TreeMesh::Vertex parent_t;
	typedef proland::TreeMesh::Vertex base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditGraphOrthoLayer::VertexData
template<>
class LunaTraits< proland::EditGraphOrthoLayer::VertexData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditGraphOrthoLayer::VertexData* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditGraphOrthoLayer::VertexData* obj);
	typedef proland::EditGraphOrthoLayer::VertexData parent_t;
	typedef proland::EditGraphOrthoLayer::VertexData base_t;
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

// Class: proland::ViewManager
template<>
class LunaTraits< proland::ViewManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ViewManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ViewManager* obj);
	typedef proland::ViewManager parent_t;
	typedef proland::ViewManager base_t;
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
	typedef osg::Referenced parent_t;
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

// Class: ork::EventHandler
template<>
class LunaTraits< ork::EventHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::EventHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::EventHandler* obj);
	typedef ork::Object parent_t;
	typedef ork::EventHandler base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Window
template<>
class LunaTraits< ork::Window > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Window* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Window* obj);
	typedef ork::Object parent_t;
	typedef ork::Window base_t;
	static luna_ConverterType converters[];
};

// Class: ork::GlutWindow
template<>
class LunaTraits< ork::GlutWindow > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::GlutWindow* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::GlutWindow* obj);
	typedef ork::Object parent_t;
	typedef ork::GlutWindow base_t;
	static luna_ConverterType converters[];
};

// Class: ork::Window::Parameters
template<>
class LunaTraits< ork::Window::Parameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Window::Parameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Window::Parameters* obj);
	typedef ork::Window::Parameters parent_t;
	typedef ork::Window::Parameters base_t;
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

// Class: proland::seg2< float >
template<>
class LunaTraits< proland::seg2< float > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::seg2< float >* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::seg2< float >* obj);
	typedef proland::seg2< float > parent_t;
	typedef proland::seg2< float > base_t;
	static luna_ConverterType converters[];
};

// Class: proland::seg2< double >
template<>
class LunaTraits< proland::seg2< double > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::seg2< double >* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::seg2< double >* obj);
	typedef proland::seg2< double > parent_t;
	typedef proland::seg2< double > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ptr< proland::Graph >
template<>
class LunaTraits< ork::ptr< proland::Graph > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ptr< proland::Graph >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ptr< proland::Graph >* obj);
	typedef ork::ptr< proland::Graph > parent_t;
	typedef ork::ptr< proland::Graph > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ptr< proland::Node >
template<>
class LunaTraits< ork::ptr< proland::Node > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ptr< proland::Node >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ptr< proland::Node >* obj);
	typedef ork::ptr< proland::Node > parent_t;
	typedef ork::ptr< proland::Node > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ptr< proland::Curve >
template<>
class LunaTraits< ork::ptr< proland::Curve > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ptr< proland::Curve >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ptr< proland::Curve >* obj);
	typedef ork::ptr< proland::Curve > parent_t;
	typedef ork::ptr< proland::Curve > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::static_ptr< proland::Curve >
template<>
class LunaTraits< ork::static_ptr< proland::Curve > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::static_ptr< proland::Curve >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::static_ptr< proland::Curve >* obj);
	typedef ork::static_ptr< proland::Curve > parent_t;
	typedef ork::static_ptr< proland::Curve > base_t;
	static luna_ConverterType converters[];
};

// Class: ork::ptr< proland::Area >
template<>
class LunaTraits< ork::ptr< proland::Area > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::ptr< proland::Area >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::ptr< proland::Area >* obj);
	typedef ork::ptr< proland::Area > parent_t;
	typedef ork::ptr< proland::Area > base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ParticleLayer
template<>
class LunaTraits< proland::ParticleLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ParticleLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ParticleLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::ParticleLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LifeCycleParticleLayer
template<>
class LunaTraits< proland::LifeCycleParticleLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LifeCycleParticleLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LifeCycleParticleLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::LifeCycleParticleLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LifeCycleParticleLayer::LifeCycleParticle
template<>
class LunaTraits< proland::LifeCycleParticleLayer::LifeCycleParticle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LifeCycleParticleLayer::LifeCycleParticle* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LifeCycleParticleLayer::LifeCycleParticle* obj);
	typedef proland::LifeCycleParticleLayer::LifeCycleParticle parent_t;
	typedef proland::LifeCycleParticleLayer::LifeCycleParticle base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ParticleProducer
template<>
class LunaTraits< proland::ParticleProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ParticleProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ParticleProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::ParticleProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ParticleStorage
template<>
class LunaTraits< proland::ParticleStorage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ParticleStorage* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ParticleStorage* obj);
	typedef ork::Object parent_t;
	typedef proland::ParticleStorage base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ParticleStorage::Particle
template<>
class LunaTraits< proland::ParticleStorage::Particle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ParticleStorage::Particle* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ParticleStorage::Particle* obj);
	typedef proland::ParticleStorage::Particle parent_t;
	typedef proland::ParticleStorage::Particle base_t;
	static luna_ConverterType converters[];
};

// Class: proland::RandomParticleLayer
template<>
class LunaTraits< proland::RandomParticleLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::RandomParticleLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::RandomParticleLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::RandomParticleLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::RandomParticleLayer::RandomParticle
template<>
class LunaTraits< proland::RandomParticleLayer::RandomParticle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::RandomParticleLayer::RandomParticle* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::RandomParticleLayer::RandomParticle* obj);
	typedef proland::RandomParticleLayer::RandomParticle parent_t;
	typedef proland::RandomParticleLayer::RandomParticle base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ParticleGrid
template<>
class LunaTraits< proland::ParticleGrid > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ParticleGrid* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ParticleGrid* obj);
	typedef ork::Object parent_t;
	typedef proland::ParticleGrid base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ScreenParticleLayer
template<>
class LunaTraits< proland::ScreenParticleLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ScreenParticleLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ScreenParticleLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::ScreenParticleLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ScreenParticleLayer::ScreenParticle
template<>
class LunaTraits< proland::ScreenParticleLayer::ScreenParticle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ScreenParticleLayer::ScreenParticle* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ScreenParticleLayer::ScreenParticle* obj);
	typedef proland::ScreenParticleLayer::ScreenParticle parent_t;
	typedef proland::ScreenParticleLayer::ScreenParticle base_t;
	static luna_ConverterType converters[];
};

// Class: proland::FlowTile
template<>
class LunaTraits< proland::FlowTile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::FlowTile* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::FlowTile* obj);
	typedef ork::Object parent_t;
	typedef proland::FlowTile base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TerrainParticleLayer
template<>
class LunaTraits< proland::TerrainParticleLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TerrainParticleLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TerrainParticleLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::TerrainParticleLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TerrainParticleLayer::TerrainInfo
template<>
class LunaTraits< proland::TerrainParticleLayer::TerrainInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TerrainParticleLayer::TerrainInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TerrainParticleLayer::TerrainInfo* obj);
	typedef proland::TerrainParticleLayer::TerrainInfo parent_t;
	typedef proland::TerrainParticleLayer::TerrainInfo base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TerrainParticleLayer::TerrainParticle
template<>
class LunaTraits< proland::TerrainParticleLayer::TerrainParticle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TerrainParticleLayer::TerrainParticle* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TerrainParticleLayer::TerrainParticle* obj);
	typedef proland::TerrainParticleLayer::TerrainParticle parent_t;
	typedef proland::TerrainParticleLayer::TerrainParticle base_t;
	static luna_ConverterType converters[];
};

// Class: proland::WorldParticleLayer
template<>
class LunaTraits< proland::WorldParticleLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::WorldParticleLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::WorldParticleLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::WorldParticleLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::WorldParticleLayer::WorldParticle
template<>
class LunaTraits< proland::WorldParticleLayer::WorldParticle > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::WorldParticleLayer::WorldParticle* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::WorldParticleLayer::WorldParticle* obj);
	typedef proland::WorldParticleLayer::WorldParticle parent_t;
	typedef proland::WorldParticleLayer::WorldParticle base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileStorage
template<>
class LunaTraits< proland::TileStorage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileStorage* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileStorage* obj);
	typedef ork::Object parent_t;
	typedef proland::TileStorage base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileStorage::Slot
template<>
class LunaTraits< proland::TileStorage::Slot > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileStorage::Slot* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileStorage::Slot* obj);
	typedef proland::TileStorage::Slot parent_t;
	typedef proland::TileStorage::Slot base_t;
	static luna_ConverterType converters[];
};

// Class: proland::GPUTileStorage
template<>
class LunaTraits< proland::GPUTileStorage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::GPUTileStorage* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::GPUTileStorage* obj);
	typedef ork::Object parent_t;
	typedef proland::GPUTileStorage base_t;
	static luna_ConverterType converters[];
};

// Class: proland::GPUTileStorage::GPUSlot
template<>
class LunaTraits< proland::GPUTileStorage::GPUSlot > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::GPUTileStorage::GPUSlot* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::GPUTileStorage::GPUSlot* obj);
	typedef proland::GPUTileStorage::GPUSlot parent_t;
	typedef proland::GPUTileStorage::GPUSlot base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ObjectTileStorage
template<>
class LunaTraits< proland::ObjectTileStorage > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ObjectTileStorage* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ObjectTileStorage* obj);
	typedef ork::Object parent_t;
	typedef proland::ObjectTileStorage base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ObjectTileStorage::ObjectSlot
template<>
class LunaTraits< proland::ObjectTileStorage::ObjectSlot > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ObjectTileStorage::ObjectSlot* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ObjectTileStorage::ObjectSlot* obj);
	typedef proland::ObjectTileStorage::ObjectSlot parent_t;
	typedef proland::ObjectTileStorage::ObjectSlot base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileCache
template<>
class LunaTraits< proland::TileCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileCache* obj);
	typedef ork::Object parent_t;
	typedef proland::TileCache base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileCache::Tile
template<>
class LunaTraits< proland::TileCache::Tile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileCache::Tile* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileCache::Tile* obj);
	typedef proland::TileCache::Tile parent_t;
	typedef proland::TileCache::Tile base_t;
	static luna_ConverterType converters[];
};

// Class: std::pair< int, std::pair< int, int > >
template<>
class LunaTraits< std::pair< int, std::pair< int, int > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< int, std::pair< int, int > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< int, std::pair< int, int > >* obj);
	typedef std::pair< int, std::pair< int, int > > parent_t;
	typedef std::pair< int, std::pair< int, int > > base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileLayer
template<>
class LunaTraits< proland::TileLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::TileLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileProducer
template<>
class LunaTraits< proland::TileProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::TileProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Deformation
template<>
class LunaTraits< proland::Deformation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Deformation* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Deformation* obj);
	typedef ork::Object parent_t;
	typedef proland::Deformation base_t;
	static luna_ConverterType converters[];
};

// Class: proland::CylindricalDeformation
template<>
class LunaTraits< proland::CylindricalDeformation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::CylindricalDeformation* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::CylindricalDeformation* obj);
	typedef ork::Object parent_t;
	typedef proland::CylindricalDeformation base_t;
	static luna_ConverterType converters[];
};

// Class: proland::DrawTerrainTask
template<>
class LunaTraits< proland::DrawTerrainTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DrawTerrainTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DrawTerrainTask* obj);
	typedef ork::Object parent_t;
	typedef proland::DrawTerrainTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ReadbackManager
template<>
class LunaTraits< proland::ReadbackManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ReadbackManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ReadbackManager* obj);
	typedef ork::Object parent_t;
	typedef proland::ReadbackManager base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ReadbackManager::Callback
template<>
class LunaTraits< proland::ReadbackManager::Callback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ReadbackManager::Callback* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ReadbackManager::Callback* obj);
	typedef ork::Object parent_t;
	typedef proland::ReadbackManager::Callback base_t;
	static luna_ConverterType converters[];
};

// Class: proland::SphericalDeformation
template<>
class LunaTraits< proland::SphericalDeformation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::SphericalDeformation* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::SphericalDeformation* obj);
	typedef ork::Object parent_t;
	typedef proland::SphericalDeformation base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TerrainNode
template<>
class LunaTraits< proland::TerrainNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TerrainNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TerrainNode* obj);
	typedef ork::Object parent_t;
	typedef proland::TerrainNode base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TerrainQuad
template<>
class LunaTraits< proland::TerrainQuad > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TerrainQuad* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TerrainQuad* obj);
	typedef ork::Object parent_t;
	typedef proland::TerrainQuad base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileSampler
template<>
class LunaTraits< proland::TileSampler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileSampler* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileSampler* obj);
	typedef ork::Object parent_t;
	typedef proland::TileSampler base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileSampler::TileFilter
template<>
class LunaTraits< proland::TileSampler::TileFilter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileSampler::TileFilter* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileSampler::TileFilter* obj);
	typedef proland::TileSampler::TileFilter parent_t;
	typedef proland::TileSampler::TileFilter base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TileSamplerZ
template<>
class LunaTraits< proland::TileSamplerZ > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TileSamplerZ* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TileSamplerZ* obj);
	typedef ork::Object parent_t;
	typedef proland::TileSamplerZ base_t;
	static luna_ConverterType converters[];
};

// Class: proland::UpdateTerrainTask
template<>
class LunaTraits< proland::UpdateTerrainTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::UpdateTerrainTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::UpdateTerrainTask* obj);
	typedef ork::Object parent_t;
	typedef proland::UpdateTerrainTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::UpdateTileSamplersTask
template<>
class LunaTraits< proland::UpdateTileSamplersTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::UpdateTileSamplersTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::UpdateTileSamplersTask* obj);
	typedef ork::Object parent_t;
	typedef proland::UpdateTileSamplersTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::BasicViewHandler
template<>
class LunaTraits< proland::BasicViewHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::BasicViewHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::BasicViewHandler* obj);
	typedef ork::Object parent_t;
	typedef proland::BasicViewHandler base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Recordable
template<>
class LunaTraits< proland::Recordable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Recordable* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Recordable* obj);
	typedef proland::Recordable parent_t;
	typedef proland::Recordable base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EventRecorder
template<>
class LunaTraits< proland::EventRecorder > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EventRecorder* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EventRecorder* obj);
	typedef ork::Object parent_t;
	typedef proland::EventRecorder base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EventRecorder::Event
template<>
class LunaTraits< proland::EventRecorder::Event > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EventRecorder::Event* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EventRecorder::Event* obj);
	typedef proland::EventRecorder::Event parent_t;
	typedef proland::EventRecorder::Event base_t;
	static luna_ConverterType converters[];
};

// Class: proland::MousePositionHandler
template<>
class LunaTraits< proland::MousePositionHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::MousePositionHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::MousePositionHandler* obj);
	typedef ork::Object parent_t;
	typedef proland::MousePositionHandler base_t;
	static luna_ConverterType converters[];
};

// Class: proland::SceneVisitor
template<>
class LunaTraits< proland::SceneVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::SceneVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::SceneVisitor* obj);
	typedef ork::Object parent_t;
	typedef proland::SceneVisitor base_t;
	static luna_ConverterType converters[];
};

// Class: proland::DrawTweakBarTask
template<>
class LunaTraits< proland::DrawTweakBarTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DrawTweakBarTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DrawTweakBarTask* obj);
	typedef ork::Object parent_t;
	typedef proland::DrawTweakBarTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakBarHandler
template<>
class LunaTraits< proland::TweakBarHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakBarHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakBarHandler* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakBarHandler base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakBarManager
template<>
class LunaTraits< proland::TweakBarManager > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakBarManager* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakBarManager* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakBarManager base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakBarManager::BarData
template<>
class LunaTraits< proland::TweakBarManager::BarData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakBarManager::BarData* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakBarManager::BarData* obj);
	typedef proland::TweakBarManager::BarData parent_t;
	typedef proland::TweakBarManager::BarData base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakResource
template<>
class LunaTraits< proland::TweakResource > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakResource* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakResource* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakResource base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakResource::Data
template<>
class LunaTraits< proland::TweakResource::Data > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakResource::Data* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakResource::Data* obj);
	typedef proland::TweakResource::Data parent_t;
	typedef proland::TweakResource::Data base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakSceneGraph
template<>
class LunaTraits< proland::TweakSceneGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakSceneGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakSceneGraph* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakSceneGraph base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakSceneGraph::TextureInfo
template<>
class LunaTraits< proland::TweakSceneGraph::TextureInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakSceneGraph::TextureInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakSceneGraph::TextureInfo* obj);
	typedef proland::TweakSceneGraph::TextureInfo parent_t;
	typedef proland::TweakSceneGraph::TextureInfo base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakViewHandler
template<>
class LunaTraits< proland::TweakViewHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakViewHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakViewHandler* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakViewHandler base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakViewHandler::Position
template<>
class LunaTraits< proland::TweakViewHandler::Position > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakViewHandler::Position* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakViewHandler::Position* obj);
	typedef proland::BasicViewHandler::Position parent_t;
	typedef proland::TweakViewHandler::Position base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TerrainViewController
template<>
class LunaTraits< proland::TerrainViewController > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TerrainViewController* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TerrainViewController* obj);
	typedef ork::Object parent_t;
	typedef proland::TerrainViewController base_t;
	static luna_ConverterType converters[];
};

// Class: proland::CylinderViewController
template<>
class LunaTraits< proland::CylinderViewController > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::CylinderViewController* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::CylinderViewController* obj);
	typedef ork::Object parent_t;
	typedef proland::CylinderViewController base_t;
	static luna_ConverterType converters[];
};

// Class: proland::PlanetViewController
template<>
class LunaTraits< proland::PlanetViewController > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::PlanetViewController* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::PlanetViewController* obj);
	typedef ork::Object parent_t;
	typedef proland::PlanetViewController base_t;
	static luna_ConverterType converters[];
};

// Class: proland::CPUElevationProducer
template<>
class LunaTraits< proland::CPUElevationProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::CPUElevationProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::CPUElevationProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::CPUElevationProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ElevationProducer
template<>
class LunaTraits< proland::ElevationProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ElevationProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ElevationProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::ElevationProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::NormalProducer
template<>
class LunaTraits< proland::NormalProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::NormalProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::NormalProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::NormalProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ResidualProducer
template<>
class LunaTraits< proland::ResidualProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ResidualProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ResidualProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::ResidualProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EmptyOrthoLayer
template<>
class LunaTraits< proland::EmptyOrthoLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EmptyOrthoLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EmptyOrthoLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::EmptyOrthoLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::OrthoCPUProducer
template<>
class LunaTraits< proland::OrthoCPUProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::OrthoCPUProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::OrthoCPUProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::OrthoCPUProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::OrthoGPUProducer
template<>
class LunaTraits< proland::OrthoGPUProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::OrthoGPUProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::OrthoGPUProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::OrthoGPUProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::OrthoProducer
template<>
class LunaTraits< proland::OrthoProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::OrthoProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::OrthoProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::OrthoProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TextureLayer
template<>
class LunaTraits< proland::TextureLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TextureLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TextureLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::TextureLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TextureLayer::BlendParams
template<>
class LunaTraits< proland::TextureLayer::BlendParams > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TextureLayer::BlendParams* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TextureLayer::BlendParams* obj);
	typedef proland::TextureLayer::BlendParams parent_t;
	typedef proland::TextureLayer::BlendParams base_t;
	static luna_ConverterType converters[];
};

// Class: proland::AbstractTileCache
template<>
class LunaTraits< proland::AbstractTileCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::AbstractTileCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::AbstractTileCache* obj);
	typedef proland::AbstractTileCache parent_t;
	typedef proland::AbstractTileCache base_t;
	static luna_ConverterType converters[];
};

// Class: proland::FloatTileCache
template<>
class LunaTraits< proland::FloatTileCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::FloatTileCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::FloatTileCache* obj);
	typedef proland::FloatTileCache parent_t;
	typedef proland::FloatTileCache base_t;
	static luna_ConverterType converters[];
};

// Class: proland::FloatTileCache::FloatTile
template<>
class LunaTraits< proland::FloatTileCache::FloatTile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::FloatTileCache::FloatTile* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::FloatTileCache::FloatTile* obj);
	typedef proland::FloatTileCache::FloatTile parent_t;
	typedef proland::FloatTileCache::FloatTile base_t;
	static luna_ConverterType converters[];
};

// Class: proland::DemTileCache
template<>
class LunaTraits< proland::DemTileCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DemTileCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DemTileCache* obj);
	typedef proland::FloatTileCache parent_t;
	typedef proland::DemTileCache base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ElevationTileCache
template<>
class LunaTraits< proland::ElevationTileCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ElevationTileCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ElevationTileCache* obj);
	typedef proland::FloatTileCache parent_t;
	typedef proland::ElevationTileCache base_t;
	static luna_ConverterType converters[];
};

// Class: proland::PlanetElevationTileCache
template<>
class LunaTraits< proland::PlanetElevationTileCache > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::PlanetElevationTileCache* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::PlanetElevationTileCache* obj);
	typedef proland::PlanetElevationTileCache parent_t;
	typedef proland::PlanetElevationTileCache base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ApertureMipmap
template<>
class LunaTraits< proland::ApertureMipmap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ApertureMipmap* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ApertureMipmap* obj);
	typedef proland::ApertureMipmap parent_t;
	typedef proland::ApertureMipmap base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ColorMipmap
template<>
class LunaTraits< proland::ColorMipmap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ColorMipmap* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ColorMipmap* obj);
	typedef proland::AbstractTileCache parent_t;
	typedef proland::ColorMipmap base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ColorMipmap::ColorFunction
template<>
class LunaTraits< proland::ColorMipmap::ColorFunction > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ColorMipmap::ColorFunction* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ColorMipmap::ColorFunction* obj);
	typedef proland::ColorMipmap::ColorFunction parent_t;
	typedef proland::ColorMipmap::ColorFunction base_t;
	static luna_ConverterType converters[];
};

// Class: proland::HeightMipmap
template<>
class LunaTraits< proland::HeightMipmap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::HeightMipmap* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::HeightMipmap* obj);
	typedef proland::AbstractTileCache parent_t;
	typedef proland::HeightMipmap base_t;
	static luna_ConverterType converters[];
};

// Class: proland::HeightMipmap::HeightFunction
template<>
class LunaTraits< proland::HeightMipmap::HeightFunction > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::HeightMipmap::HeightFunction* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::HeightMipmap::HeightFunction* obj);
	typedef proland::HeightMipmap::HeightFunction parent_t;
	typedef proland::HeightMipmap::HeightFunction base_t;
	static luna_ConverterType converters[];
};

// Class: proland::InputMap
template<>
class LunaTraits< proland::InputMap > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::InputMap* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::InputMap* obj);
	typedef proland::InputMap parent_t;
	typedef proland::InputMap base_t;
	static luna_ConverterType converters[];
};

// Class: proland::AtmoParameters
template<>
class LunaTraits< proland::AtmoParameters > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::AtmoParameters* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::AtmoParameters* obj);
	typedef proland::AtmoParameters parent_t;
	typedef proland::AtmoParameters base_t;
	static luna_ConverterType converters[];
};

// Class: proland::AtmoProcessor
template<>
class LunaTraits< proland::AtmoProcessor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::AtmoProcessor* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::AtmoProcessor* obj);
	typedef ork::Object parent_t;
	typedef proland::AtmoProcessor base_t;
	static luna_ConverterType converters[];
};

// Class: proland::DrawOceanFFTTask
template<>
class LunaTraits< proland::DrawOceanFFTTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DrawOceanFFTTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DrawOceanFFTTask* obj);
	typedef ork::Object parent_t;
	typedef proland::DrawOceanFFTTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::DrawOceanTask
template<>
class LunaTraits< proland::DrawOceanTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DrawOceanTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DrawOceanTask* obj);
	typedef ork::Object parent_t;
	typedef proland::DrawOceanTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::DrawPlantsShadowTask
template<>
class LunaTraits< proland::DrawPlantsShadowTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DrawPlantsShadowTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DrawPlantsShadowTask* obj);
	typedef ork::Object parent_t;
	typedef proland::DrawPlantsShadowTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::DrawPlantsTask
template<>
class LunaTraits< proland::DrawPlantsTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DrawPlantsTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DrawPlantsTask* obj);
	typedef ork::Object parent_t;
	typedef proland::DrawPlantsTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LccProducer
template<>
class LunaTraits< proland::LccProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LccProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LccProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::LccProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Plants
template<>
class LunaTraits< proland::Plants > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Plants* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Plants* obj);
	typedef ork::Object parent_t;
	typedef proland::Plants base_t;
	static luna_ConverterType converters[];
};

// Class: proland::PlantsProducer
template<>
class LunaTraits< proland::PlantsProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::PlantsProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::PlantsProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::PlantsProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TreeMesh
template<>
class LunaTraits< proland::TreeMesh > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TreeMesh* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TreeMesh* obj);
	typedef proland::TreeMesh parent_t;
	typedef proland::TreeMesh base_t;
	static luna_ConverterType converters[];
};

// Class: proland::CurveData
template<>
class LunaTraits< proland::CurveData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::CurveData* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::CurveData* obj);
	typedef proland::CurveData parent_t;
	typedef proland::CurveData base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ElevationCurveData
template<>
class LunaTraits< proland::ElevationCurveData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ElevationCurveData* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ElevationCurveData* obj);
	typedef proland::CurveData parent_t;
	typedef proland::ElevationCurveData base_t;
	static luna_ConverterType converters[];
};

// Class: proland::GraphListener
template<>
class LunaTraits< proland::GraphListener > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::GraphListener* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::GraphListener* obj);
	typedef proland::GraphListener parent_t;
	typedef proland::GraphListener base_t;
	static luna_ConverterType converters[];
};

// Class: proland::CurveDataFactory
template<>
class LunaTraits< proland::CurveDataFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::CurveDataFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::CurveDataFactory* obj);
	typedef proland::GraphListener parent_t;
	typedef proland::CurveDataFactory base_t;
	static luna_ConverterType converters[];
};

// Class: proland::GraphLayer
template<>
class LunaTraits< proland::GraphLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::GraphLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::GraphLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::GraphLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ElevationGraphLayer
template<>
class LunaTraits< proland::ElevationGraphLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ElevationGraphLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ElevationGraphLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::ElevationGraphLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::RoadElevationLayer
template<>
class LunaTraits< proland::RoadElevationLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::RoadElevationLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::RoadElevationLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::RoadElevationLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::RoadElevationLayer::RoadElevationCurveData
template<>
class LunaTraits< proland::RoadElevationLayer::RoadElevationCurveData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::RoadElevationLayer::RoadElevationCurveData* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::RoadElevationLayer::RoadElevationCurveData* obj);
	typedef proland::CurveData parent_t;
	typedef proland::RoadElevationLayer::RoadElevationCurveData base_t;
	static luna_ConverterType converters[];
};

// Class: proland::WaterElevationLayer
template<>
class LunaTraits< proland::WaterElevationLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::WaterElevationLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::WaterElevationLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::WaterElevationLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::WaterElevationLayer::WaterElevationCurveData
template<>
class LunaTraits< proland::WaterElevationLayer::WaterElevationCurveData > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::WaterElevationLayer::WaterElevationCurveData* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::WaterElevationLayer::WaterElevationCurveData* obj);
	typedef proland::CurveData parent_t;
	typedef proland::WaterElevationLayer::WaterElevationCurveData base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Area
template<>
class LunaTraits< proland::Area > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Area* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Area* obj);
	typedef ork::Object parent_t;
	typedef proland::Area base_t;
	static luna_ConverterType converters[];
};

// Class: proland::CurvePart
template<>
class LunaTraits< proland::CurvePart > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::CurvePart* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::CurvePart* obj);
	typedef proland::CurvePart parent_t;
	typedef proland::CurvePart base_t;
	static luna_ConverterType converters[];
};

// Class: proland::BasicCurvePart
template<>
class LunaTraits< proland::BasicCurvePart > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::BasicCurvePart* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::BasicCurvePart* obj);
	typedef proland::CurvePart parent_t;
	typedef proland::BasicCurvePart base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Graph
template<>
class LunaTraits< proland::Graph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Graph* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Graph* obj);
	typedef ork::Object parent_t;
	typedef proland::Graph base_t;
	static luna_ConverterType converters[];
};

// Class: proland::BasicGraph
template<>
class LunaTraits< proland::BasicGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::BasicGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::BasicGraph* obj);
	typedef ork::Object parent_t;
	typedef proland::BasicGraph base_t;
	static luna_ConverterType converters[];
};

// Class: proland::BasicGraph::BasicCurveIterator
template<>
class LunaTraits< proland::BasicGraph::BasicCurveIterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::BasicGraph::BasicCurveIterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::BasicGraph::BasicCurveIterator* obj);
	typedef proland::BasicGraph::BasicCurveIterator parent_t;
	typedef proland::BasicGraph::BasicCurveIterator base_t;
	static luna_ConverterType converters[];
};

// Class: multimap< proland::CurveId, proland::CurvePtr >
template<>
class LunaTraits< multimap< proland::CurveId, proland::CurvePtr > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static multimap< proland::CurveId, proland::CurvePtr >* _bind_ctor(lua_State *L);
	static void _bind_dtor(multimap< proland::CurveId, proland::CurvePtr >* obj);
	typedef multimap< proland::CurveId, proland::CurvePtr > parent_t;
	typedef multimap< proland::CurveId, proland::CurvePtr > base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ComposedMargin
template<>
class LunaTraits< proland::ComposedMargin > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ComposedMargin* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ComposedMargin* obj);
	typedef proland::Margin parent_t;
	typedef proland::ComposedMargin base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Vertex
template<>
class LunaTraits< proland::Vertex > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Vertex* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Vertex* obj);
	typedef ork::vec2d parent_t;
	typedef proland::Vertex base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Curve
template<>
class LunaTraits< proland::Curve > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Curve* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Curve* obj);
	typedef ork::Object parent_t;
	typedef proland::Curve base_t;
	static luna_ConverterType converters[];
};

// Class: proland::FileReader
template<>
class LunaTraits< proland::FileReader > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::FileReader* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::FileReader* obj);
	typedef proland::FileReader parent_t;
	typedef proland::FileReader base_t;
	static luna_ConverterType converters[];
};

// Class: proland::FileWriter
template<>
class LunaTraits< proland::FileWriter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::FileWriter* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::FileWriter* obj);
	typedef proland::FileWriter parent_t;
	typedef proland::FileWriter base_t;
	static luna_ConverterType converters[];
};

// Class: proland::NodeId
template<>
class LunaTraits< proland::NodeId > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::NodeId* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::NodeId* obj);
	typedef proland::NodeId parent_t;
	typedef proland::NodeId base_t;
	static luna_ConverterType converters[];
};

// Class: proland::CurveId
template<>
class LunaTraits< proland::CurveId > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::CurveId* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::CurveId* obj);
	typedef proland::CurveId parent_t;
	typedef proland::CurveId base_t;
	static luna_ConverterType converters[];
};

// Class: proland::AreaId
template<>
class LunaTraits< proland::AreaId > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::AreaId* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::AreaId* obj);
	typedef proland::AreaId parent_t;
	typedef proland::AreaId base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Graph::Changes
template<>
class LunaTraits< proland::Graph::Changes > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Graph::Changes* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Graph::Changes* obj);
	typedef proland::Graph::Changes parent_t;
	typedef proland::Graph::Changes base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LazyArea
template<>
class LunaTraits< proland::LazyArea > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LazyArea* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LazyArea* obj);
	typedef ork::Object parent_t;
	typedef proland::LazyArea base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LazyCurve
template<>
class LunaTraits< proland::LazyCurve > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LazyCurve* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LazyCurve* obj);
	typedef ork::Object parent_t;
	typedef proland::LazyCurve base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LazyGraph
template<>
class LunaTraits< proland::LazyGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LazyGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LazyGraph* obj);
	typedef ork::Object parent_t;
	typedef proland::LazyGraph base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Node
template<>
class LunaTraits< proland::Node > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Node* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Node* obj);
	typedef ork::Object parent_t;
	typedef proland::Node base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LazyNode
template<>
class LunaTraits< proland::LazyNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LazyNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LazyNode* obj);
	typedef ork::Object parent_t;
	typedef proland::LazyNode base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LineCurvePart
template<>
class LunaTraits< proland::LineCurvePart > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LineCurvePart* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LineCurvePart* obj);
	typedef proland::CurvePart parent_t;
	typedef proland::LineCurvePart base_t;
	static luna_ConverterType converters[];
};

// Class: proland::GraphProducer
template<>
class LunaTraits< proland::GraphProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::GraphProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::GraphProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::GraphProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Tesselator
template<>
class LunaTraits< proland::Tesselator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Tesselator* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Tesselator* obj);
	typedef ork::Object parent_t;
	typedef proland::Tesselator base_t;
	static luna_ConverterType converters[];
};

// Class: proland::FieldsOrthoLayer
template<>
class LunaTraits< proland::FieldsOrthoLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::FieldsOrthoLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::FieldsOrthoLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::FieldsOrthoLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::ForestOrthoLayer
template<>
class LunaTraits< proland::ForestOrthoLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::ForestOrthoLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::ForestOrthoLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::ForestOrthoLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LineOrthoLayer
template<>
class LunaTraits< proland::LineOrthoLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LineOrthoLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LineOrthoLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::LineOrthoLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::MaskOrthoLayer
template<>
class LunaTraits< proland::MaskOrthoLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::MaskOrthoLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::MaskOrthoLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::MaskOrthoLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::MaskOrthoLayer::BlendParams
template<>
class LunaTraits< proland::MaskOrthoLayer::BlendParams > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::MaskOrthoLayer::BlendParams* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::MaskOrthoLayer::BlendParams* obj);
	typedef proland::MaskOrthoLayer::BlendParams parent_t;
	typedef proland::MaskOrthoLayer::BlendParams base_t;
	static luna_ConverterType converters[];
};

// Class: proland::OrthoMargin
template<>
class LunaTraits< proland::OrthoMargin > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::OrthoMargin* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::OrthoMargin* obj);
	typedef proland::Margin parent_t;
	typedef proland::OrthoMargin base_t;
	static luna_ConverterType converters[];
};

// Class: proland::RoadOrthoLayer
template<>
class LunaTraits< proland::RoadOrthoLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::RoadOrthoLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::RoadOrthoLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::RoadOrthoLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::WaterOrthoLayer
template<>
class LunaTraits< proland::WaterOrthoLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::WaterOrthoLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::WaterOrthoLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::WaterOrthoLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::WaveTile
template<>
class LunaTraits< proland::WaveTile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::WaveTile* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::WaveTile* obj);
	typedef ork::Object parent_t;
	typedef proland::WaveTile base_t;
	static luna_ConverterType converters[];
};

// Class: proland::AnimatedPerlinWaveTile
template<>
class LunaTraits< proland::AnimatedPerlinWaveTile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::AnimatedPerlinWaveTile* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::AnimatedPerlinWaveTile* obj);
	typedef ork::Object parent_t;
	typedef proland::AnimatedPerlinWaveTile base_t;
	static luna_ConverterType converters[];
};

// Class: proland::DrawRiversTask
template<>
class LunaTraits< proland::DrawRiversTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::DrawRiversTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::DrawRiversTask* obj);
	typedef ork::Object parent_t;
	typedef proland::DrawRiversTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::HydroCurve
template<>
class LunaTraits< proland::HydroCurve > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::HydroCurve* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::HydroCurve* obj);
	typedef ork::Object parent_t;
	typedef proland::HydroCurve base_t;
	static luna_ConverterType converters[];
};

// Class: proland::HydroGraph
template<>
class LunaTraits< proland::HydroGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::HydroGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::HydroGraph* obj);
	typedef ork::Object parent_t;
	typedef proland::HydroGraph base_t;
	static luna_ConverterType converters[];
};

// Class: proland::HydroGraphFactory
template<>
class LunaTraits< proland::HydroGraphFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::HydroGraphFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::HydroGraphFactory* obj);
	typedef ork::Object parent_t;
	typedef proland::HydroGraphFactory base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LazyHydroCurve
template<>
class LunaTraits< proland::LazyHydroCurve > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LazyHydroCurve* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LazyHydroCurve* obj);
	typedef ork::Object parent_t;
	typedef proland::LazyHydroCurve base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LazyHydroGraph
template<>
class LunaTraits< proland::LazyHydroGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LazyHydroGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LazyHydroGraph* obj);
	typedef ork::Object parent_t;
	typedef proland::LazyHydroGraph base_t;
	static luna_ConverterType converters[];
};

// Class: proland::LazyHydroGraphFactory
template<>
class LunaTraits< proland::LazyHydroGraphFactory > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::LazyHydroGraphFactory* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::LazyHydroGraphFactory* obj);
	typedef ork::Object parent_t;
	typedef proland::LazyHydroGraphFactory base_t;
	static luna_ConverterType converters[];
};

// Class: proland::HydroFlowProducer
template<>
class LunaTraits< proland::HydroFlowProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::HydroFlowProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::HydroFlowProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::HydroFlowProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::HydroFlowTile
template<>
class LunaTraits< proland::HydroFlowTile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::HydroFlowTile* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::HydroFlowTile* obj);
	typedef ork::Object parent_t;
	typedef proland::HydroFlowTile base_t;
	static luna_ConverterType converters[];
};

// Class: proland::PerlinWaveTile
template<>
class LunaTraits< proland::PerlinWaveTile > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::PerlinWaveTile* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::PerlinWaveTile* obj);
	typedef ork::Object parent_t;
	typedef proland::PerlinWaveTile base_t;
	static luna_ConverterType converters[];
};

// Class: proland::UpdateRiversTask
template<>
class LunaTraits< proland::UpdateRiversTask > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::UpdateRiversTask* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::UpdateRiversTask* obj);
	typedef ork::Object parent_t;
	typedef proland::UpdateRiversTask base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakRivers
template<>
class LunaTraits< proland::TweakRivers > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakRivers* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakRivers* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakRivers base_t;
	static luna_ConverterType converters[];
};

// Class: proland::Editor
template<>
class LunaTraits< proland::Editor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::Editor* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::Editor* obj);
	typedef proland::Editor parent_t;
	typedef proland::Editor base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditElevationProducer
template<>
class LunaTraits< proland::EditElevationProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditElevationProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditElevationProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::EditElevationProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditGraphOrthoLayer
template<>
class LunaTraits< proland::EditGraphOrthoLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditGraphOrthoLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditGraphOrthoLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::EditGraphOrthoLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditGraphOrthoLayer::EditGraphHandler
template<>
class LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditGraphOrthoLayer::EditGraphHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditGraphOrthoLayer::EditGraphHandler* obj);
	typedef ork::Object parent_t;
	typedef proland::EditGraphOrthoLayer::EditGraphHandler base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditGraphOrthoLayer::EditGraphHandlerList
template<>
class LunaTraits< proland::EditGraphOrthoLayer::EditGraphHandlerList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditGraphOrthoLayer::EditGraphHandlerList* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditGraphOrthoLayer::EditGraphHandlerList* obj);
	typedef ork::Object parent_t;
	typedef proland::EditGraphOrthoLayer::EditGraphHandlerList base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditHydroGraphOrthoLayer
template<>
class LunaTraits< proland::EditHydroGraphOrthoLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditHydroGraphOrthoLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditHydroGraphOrthoLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::EditHydroGraphOrthoLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler
template<>
class LunaTraits< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler* obj);
	typedef ork::Object parent_t;
	typedef proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditorHandler
template<>
class LunaTraits< proland::EditorHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditorHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditorHandler* obj);
	typedef ork::Object parent_t;
	typedef proland::EditorHandler base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditOrthoCPUProducer
template<>
class LunaTraits< proland::EditOrthoCPUProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditOrthoCPUProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditOrthoCPUProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::EditOrthoCPUProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditOrthoProducer
template<>
class LunaTraits< proland::EditOrthoProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditOrthoProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditOrthoProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::EditOrthoProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::EditResidualProducer
template<>
class LunaTraits< proland::EditResidualProducer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::EditResidualProducer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::EditResidualProducer* obj);
	typedef ork::Object parent_t;
	typedef proland::EditResidualProducer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakDemEditor
template<>
class LunaTraits< proland::TweakDemEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakDemEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakDemEditor* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakDemEditor base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakGraphLayer
template<>
class LunaTraits< proland::TweakGraphLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakGraphLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakGraphLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakGraphLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakHydroGraphLayer
template<>
class LunaTraits< proland::TweakHydroGraphLayer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakHydroGraphLayer* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakHydroGraphLayer* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakHydroGraphLayer base_t;
	static luna_ConverterType converters[];
};

// Class: proland::TweakOrthoEditor
template<>
class LunaTraits< proland::TweakOrthoEditor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static proland::TweakOrthoEditor* _bind_ctor(lua_State *L);
	static void _bind_dtor(proland::TweakOrthoEditor* obj);
	typedef ork::Object parent_t;
	typedef proland::TweakOrthoEditor base_t;
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


// Mapped type: ork::Mesh< ork::vec2f, unsigned int >
template<>
class LunaTraits< ork::Mesh< ork::vec2f, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Mesh< ork::vec2f, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Mesh< ork::vec2f, unsigned int >* obj);
	typedef ork::Mesh< ork::vec2f, unsigned int > parent_t;
	typedef ork::Mesh< ork::vec2f, unsigned int > base_t;
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

// Mapped type: std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >
template<>
class LunaTraits< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* obj);
	typedef std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > parent_t;
	typedef std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >
template<>
class LunaTraits< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > >* obj);
	typedef map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > parent_t;
	typedef map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< proland::TweakBarManager::BarData >
template<>
class LunaTraits< vector< proland::TweakBarManager::BarData > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< proland::TweakBarManager::BarData >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< proland::TweakBarManager::BarData >* obj);
	typedef vector< proland::TweakBarManager::BarData > parent_t;
	typedef vector< proland::TweakBarManager::BarData > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: set< int >
template<>
class LunaTraits< set< int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static set< int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(set< int >* obj);
	typedef set< int > parent_t;
	typedef set< int > base_t;
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

// Mapped type: vector< proland::EditGraphOrthoLayer::VertexData >
template<>
class LunaTraits< vector< proland::EditGraphOrthoLayer::VertexData > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< proland::EditGraphOrthoLayer::VertexData >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< proland::EditGraphOrthoLayer::VertexData >* obj);
	typedef vector< proland::EditGraphOrthoLayer::VertexData > parent_t;
	typedef vector< proland::EditGraphOrthoLayer::VertexData > base_t;
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

// Mapped type: ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >
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

// Mapped type: std::vector< ork::ptr< proland::TileProducer > >
template<>
class LunaTraits< std::vector< ork::ptr< proland::TileProducer > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< ork::ptr< proland::TileProducer > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< ork::ptr< proland::TileProducer > >* obj);
	typedef std::vector< ork::ptr< proland::TileProducer > > parent_t;
	typedef std::vector< ork::ptr< proland::TileProducer > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< proland::ParticleStorage::Particle * >::iterator
template<>
class LunaTraits< std::vector< proland::ParticleStorage::Particle * >::iterator > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< proland::ParticleStorage::Particle * >::iterator* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< proland::ParticleStorage::Particle * >::iterator* obj);
	typedef std::vector< proland::ParticleStorage::Particle * >::iterator parent_t;
	typedef std::vector< proland::ParticleStorage::Particle * >::iterator base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::pair< int, std::pair< int, std::pair< int, int > > >
template<>
class LunaTraits< std::pair< int, std::pair< int, std::pair< int, int > > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::pair< int, std::pair< int, std::pair< int, int > > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::pair< int, std::pair< int, std::pair< int, int > > >* obj);
	typedef std::pair< int, std::pair< int, std::pair< int, int > > > parent_t;
	typedef std::pair< int, std::pair< int, std::pair< int, int > > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< proland::TweakViewHandler::Position >
template<>
class LunaTraits< std::vector< proland::TweakViewHandler::Position > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< proland::TweakViewHandler::Position >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< proland::TweakViewHandler::Position >* obj);
	typedef std::vector< proland::TweakViewHandler::Position > parent_t;
	typedef std::vector< proland::TweakViewHandler::Position > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< ork::vec4d >
template<>
class LunaTraits< vector< ork::vec4d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< ork::vec4d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< ork::vec4d >* obj);
	typedef vector< ork::vec4d > parent_t;
	typedef vector< ork::vec4d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< ork::ptr< proland::PlantsProducer > >
template<>
class LunaTraits< vector< ork::ptr< proland::PlantsProducer > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< ork::ptr< proland::PlantsProducer > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< ork::ptr< proland::PlantsProducer > >* obj);
	typedef vector< ork::ptr< proland::PlantsProducer > > parent_t;
	typedef vector< ork::ptr< proland::PlantsProducer > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: set< proland::TileCache::Tile::Id >
template<>
class LunaTraits< set< proland::TileCache::Tile::Id > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static set< proland::TileCache::Tile::Id >* _bind_ctor(lua_State *L);
	static void _bind_dtor(set< proland::TileCache::Tile::Id >* obj);
	typedef set< proland::TileCache::Tile::Id > parent_t;
	typedef set< proland::TileCache::Tile::Id > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ork::Mesh< ork::vec4f, unsigned int >
template<>
class LunaTraits< ork::Mesh< ork::vec4f, unsigned int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::Mesh< ork::vec4f, unsigned int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::Mesh< ork::vec4f, unsigned int >* obj);
	typedef ork::Mesh< ork::vec4f, unsigned int > parent_t;
	typedef ork::Mesh< ork::vec4f, unsigned int > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: set< proland::TileCache::Tile * >
template<>
class LunaTraits< set< proland::TileCache::Tile * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static set< proland::TileCache::Tile * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(set< proland::TileCache::Tile * >* obj);
	typedef set< proland::TileCache::Tile * > parent_t;
	typedef set< proland::TileCache::Tile * > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: set< proland::NodeId >
template<>
class LunaTraits< set< proland::NodeId > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static set< proland::NodeId >* _bind_ctor(lua_State *L);
	static void _bind_dtor(set< proland::NodeId >* obj);
	typedef set< proland::NodeId > parent_t;
	typedef set< proland::NodeId > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< proland::Vertex >
template<>
class LunaTraits< vector< proland::Vertex > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< proland::Vertex >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< proland::Vertex >* obj);
	typedef vector< proland::Vertex > parent_t;
	typedef vector< proland::Vertex > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< proland::CurvePart * >
template<>
class LunaTraits< vector< proland::CurvePart * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< proland::CurvePart * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< proland::CurvePart * >* obj);
	typedef vector< proland::CurvePart * > parent_t;
	typedef vector< proland::CurvePart * > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: set< proland::AreaId >
template<>
class LunaTraits< set< proland::AreaId > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static set< proland::AreaId >* _bind_ctor(lua_State *L);
	static void _bind_dtor(set< proland::AreaId >* obj);
	typedef set< proland::AreaId > parent_t;
	typedef set< proland::AreaId > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< proland::CurveId >
template<>
class LunaTraits< vector< proland::CurveId > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< proland::CurveId >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< proland::CurveId >* obj);
	typedef vector< proland::CurveId > parent_t;
	typedef vector< proland::CurveId > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: map< proland::CurveId, int >
template<>
class LunaTraits< map< proland::CurveId, int > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static map< proland::CurveId, int >* _bind_ctor(lua_State *L);
	static void _bind_dtor(map< proland::CurveId, int >* obj);
	typedef map< proland::CurveId, int > parent_t;
	typedef map< proland::CurveId, int > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< ork::vec2d >
template<>
class LunaTraits< vector< ork::vec2d > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< ork::vec2d >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< ork::vec2d >* obj);
	typedef vector< ork::vec2d > parent_t;
	typedef vector< ork::vec2d > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::set< proland::CurveId >
template<>
class LunaTraits< std::set< proland::CurveId > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< proland::CurveId >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< proland::CurveId >* obj);
	typedef std::set< proland::CurveId > parent_t;
	typedef std::set< proland::CurveId > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: list< proland::AreaId >
template<>
class LunaTraits< list< proland::AreaId > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static list< proland::AreaId >* _bind_ctor(lua_State *L);
	static void _bind_dtor(list< proland::AreaId >* obj);
	typedef list< proland::AreaId > parent_t;
	typedef list< proland::AreaId > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< ork::ptr< proland::HydroCurve > >
template<>
class LunaTraits< vector< ork::ptr< proland::HydroCurve > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< ork::ptr< proland::HydroCurve > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< ork::ptr< proland::HydroCurve > >* obj);
	typedef vector< ork::ptr< proland::HydroCurve > > parent_t;
	typedef vector< ork::ptr< proland::HydroCurve > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< ork::ptr< proland::GraphProducer > >
template<>
class LunaTraits< vector< ork::ptr< proland::GraphProducer > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< ork::ptr< proland::GraphProducer > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< ork::ptr< proland::GraphProducer > >* obj);
	typedef vector< ork::ptr< proland::GraphProducer > > parent_t;
	typedef vector< ork::ptr< proland::GraphProducer > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >
template<>
class LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >* obj);
	typedef ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > parent_t;
	typedef ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > >
template<>
class LunaTraits< ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > >* obj);
	typedef ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > parent_t;
	typedef ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: vector< ork::vec2i >
template<>
class LunaTraits< vector< ork::vec2i > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vector< ork::vec2i >* _bind_ctor(lua_State *L);
	static void _bind_dtor(vector< ork::vec2i >* obj);
	typedef vector< ork::vec2i > parent_t;
	typedef vector< ork::vec2i > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ork::static_ptr< ork::Program >
template<>
class LunaTraits< ork::static_ptr< ork::Program > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::static_ptr< ork::Program >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::static_ptr< ork::Program >* obj);
	typedef ork::static_ptr< ork::Program > parent_t;
	typedef ork::static_ptr< ork::Program > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: ork::static_ptr< ork::Uniform2f >
template<>
class LunaTraits< ork::static_ptr< ork::Uniform2f > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static ork::static_ptr< ork::Uniform2f >* _bind_ctor(lua_State *L);
	static void _bind_dtor(ork::static_ptr< ork::Uniform2f >* obj);
	typedef ork::static_ptr< ork::Uniform2f > parent_t;
	typedef ork::static_ptr< ork::Uniform2f > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >
template<>
class LunaTraits< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * >* obj);
	typedef map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > parent_t;
	typedef map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > base_t;
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

// Referenced external: osg::RenderInfo
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

// Referenced external: std::vector< float >
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
class LunaType< 83387491 > {
public:
	typedef mfs_file type;
	
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
class LunaType< 6582046 > {
public:
	typedef proland::BasicViewHandler::Position type;
	
};

template<>
class LunaType< 30968597 > {
public:
	typedef proland::Margin type;
	
};

template<>
class LunaType< 2199838 > {
public:
	typedef proland::EditGraphOrthoLayer::SelectionData type;
	
};

template<>
class LunaType< 89018139 > {
public:
	typedef ork::SetTargetTask::Target type;
	
};

template<>
class LunaType< 10738453 > {
public:
	typedef proland::DrawRiversTask::TerrainInfo type;
	
};

template<>
class LunaType< 99111272 > {
public:
	typedef proland::AbstractTileCache::Tile type;
	
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
class LunaType< 81187440 > {
public:
	typedef TwBar type;
	
};

template<>
class LunaType< 10375505 > {
public:
	typedef proland::DrawRiversTask::vecParticle type;
	
};

template<>
class LunaType< 35303943 > {
public:
	typedef ork::Font::Vertex type;
	
};

template<>
class LunaType< 75726744 > {
public:
	typedef proland::TreeMesh::Vertex type;
	
};

template<>
class LunaType< 71059590 > {
public:
	typedef proland::EditGraphOrthoLayer::VertexData type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 2915545 > {
public:
	typedef proland::ViewManager type;
	
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
class LunaType< 5752345 > {
public:
	typedef ork::Window::Parameters type;
	
};

template<>
class LunaType< 58780377 > {
public:
	typedef proland::seg2f type;
	
};

template<>
class LunaType< 58780375 > {
public:
	typedef proland::seg2d type;
	
};

template<>
class LunaType< 94278244 > {
public:
	typedef proland::GraphPtr type;
	
};

template<>
class LunaType< 35325349 > {
public:
	typedef proland::NodePtr type;
	
};

template<>
class LunaType< 98496290 > {
public:
	typedef proland::CurvePtr type;
	
};

template<>
class LunaType< 26005569 > {
public:
	typedef proland::StaticCurvePtr type;
	
};

template<>
class LunaType< 84471053 > {
public:
	typedef proland::AreaPtr type;
	
};

template<>
class LunaType< 49055864 > {
public:
	typedef proland::LifeCycleParticleLayer::LifeCycleParticle type;
	
};

template<>
class LunaType< 93158916 > {
public:
	typedef proland::ParticleStorage::Particle type;
	
};

template<>
class LunaType< 59029701 > {
public:
	typedef proland::RandomParticleLayer::RandomParticle type;
	
};

template<>
class LunaType< 15286603 > {
public:
	typedef proland::ScreenParticleLayer::ScreenParticle type;
	
};

template<>
class LunaType< 29709589 > {
public:
	typedef proland::TerrainParticleLayer::TerrainInfo type;
	
};

template<>
class LunaType< 19603310 > {
public:
	typedef proland::TerrainParticleLayer::TerrainParticle type;
	
};

template<>
class LunaType< 65640640 > {
public:
	typedef proland::WorldParticleLayer::WorldParticle type;
	
};

template<>
class LunaType< 72091111 > {
public:
	typedef proland::TileStorage::Slot type;
	
};

template<>
class LunaType< 71475540 > {
public:
	typedef proland::GPUTileStorage::GPUSlot type;
	
};

template<>
class LunaType< 51023118 > {
public:
	typedef proland::ObjectTileStorage::ObjectSlot type;
	
};

template<>
class LunaType< 10515563 > {
public:
	typedef proland::TileCache::Tile type;
	
};

template<>
class LunaType< 42607664 > {
public:
	typedef proland::TileCache::Tile::Id type;
	
};

template<>
class LunaType< 20847041 > {
public:
	typedef proland::TileCache::Tile::TId type;
	
};

template<>
class LunaType< 89838339 > {
public:
	typedef proland::TileSampler::TileFilter type;
	
};

template<>
class LunaType< 61540425 > {
public:
	typedef proland::Recordable type;
	
};

template<>
class LunaType< 52737574 > {
public:
	typedef proland::EventRecorder::Event type;
	
};

template<>
class LunaType< 491757 > {
public:
	typedef proland::TweakBarManager::BarData type;
	
};

template<>
class LunaType< 65210794 > {
public:
	typedef proland::TweakResource::Data type;
	
};

template<>
class LunaType< 21281132 > {
public:
	typedef proland::TweakSceneGraph::TextureInfo type;
	
};

template<>
class LunaType< 11252811 > {
public:
	typedef proland::TextureLayer::BlendParams type;
	
};

template<>
class LunaType< 98663171 > {
public:
	typedef proland::AbstractTileCache type;
	
};

template<>
class LunaType< 69405840 > {
public:
	typedef proland::FloatTileCache type;
	
};

template<>
class LunaType< 66358430 > {
public:
	typedef proland::FloatTileCache::FloatTile type;
	
};

template<>
class LunaType< 68434075 > {
public:
	typedef proland::PlanetElevationTileCache type;
	
};

template<>
class LunaType< 6950945 > {
public:
	typedef proland::ApertureMipmap type;
	
};

template<>
class LunaType< 14812871 > {
public:
	typedef proland::ColorMipmap::ColorFunction type;
	
};

template<>
class LunaType< 3347220 > {
public:
	typedef proland::HeightMipmap::HeightFunction type;
	
};

template<>
class LunaType< 3893247 > {
public:
	typedef proland::InputMap type;
	
};

template<>
class LunaType< 84217978 > {
public:
	typedef proland::AtmoParameters type;
	
};

template<>
class LunaType< 61781926 > {
public:
	typedef proland::TreeMesh type;
	
};

template<>
class LunaType< 53008858 > {
public:
	typedef proland::CurveData type;
	
};

template<>
class LunaType< 23314933 > {
public:
	typedef proland::GraphListener type;
	
};

template<>
class LunaType< 53366307 > {
public:
	typedef proland::CurvePart type;
	
};

template<>
class LunaType< 38054140 > {
public:
	typedef proland::BasicGraph::BasicCurveIterator type;
	
};

template<>
class LunaType< 70488134 > {
public:
	typedef proland::BasicGraph::BasicCurveIterator::T type;
	
};

template<>
class LunaType< 30462081 > {
public:
	typedef proland::FileReader type;
	
};

template<>
class LunaType< 85867294 > {
public:
	typedef proland::FileWriter type;
	
};

template<>
class LunaType< 72107044 > {
public:
	typedef proland::NodeId type;
	
};

template<>
class LunaType< 58015782 > {
public:
	typedef proland::CurveId type;
	
};

template<>
class LunaType< 2724636 > {
public:
	typedef proland::AreaId type;
	
};

template<>
class LunaType< 81964795 > {
public:
	typedef proland::Graph::CurveIterator type;
	
};

template<>
class LunaType< 47132056 > {
public:
	typedef proland::Graph::Changes type;
	
};

template<>
class LunaType< 54645187 > {
public:
	typedef proland::LazyGraph::LazyCurveIterator type;
	
};

template<>
class LunaType< 50727209 > {
public:
	typedef proland::MaskOrthoLayer::BlendParams type;
	
};

template<>
class LunaType< 4450546 > {
public:
	typedef proland::Editor type;
	
};

template<>
class LunaType< 79829375 > {
public:
	typedef std::type_info type;
	
};

template<>
class LunaType< 1443305 > {
public:
	typedef ork::Mesh< ork::vec2f, unsigned int > type;
	
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
class LunaType< 16689971 > {
public:
	typedef ork::SetIterator< ork::ptr< ork::Task > > type;
	
};

template<>
class LunaType< 30985879 > {
public:
	typedef proland::seg2< float > type;
	
};

template<>
class LunaType< 70381882 > {
public:
	typedef proland::seg2< double > type;
	
};

template<>
class LunaType< 65799894 > {
public:
	typedef ork::ptr< proland::Graph > type;
	
};

template<>
class LunaType< 41768114 > {
public:
	typedef ork::ptr< proland::Node > type;
	
};

template<>
class LunaType< 17549196 > {
public:
	typedef ork::ptr< proland::Curve > type;
	
};

template<>
class LunaType< 5904718 > {
public:
	typedef ork::static_ptr< proland::Curve > type;
	
};

template<>
class LunaType< 72385761 > {
public:
	typedef ork::ptr< proland::Area > type;
	
};

template<>
class LunaType< 67383368 > {
public:
	typedef std::pair< int, std::pair< int, int > > type;
	
};

template<>
class LunaType< 46585073 > {
public:
	typedef multimap< proland::CurveId, proland::CurvePtr > type;
	
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
class LunaType< 13829843 > {
public:
	typedef std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > type;
	
};

template<>
class LunaType< 9346150 > {
public:
	typedef map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > type;
	
};

template<>
class LunaType< 40535768 > {
public:
	typedef vector< proland::TweakBarManager::BarData > type;
	
};

template<>
class LunaType< 13198241 > {
public:
	typedef set< int > type;
	
};

template<>
class LunaType< 86321452 > {
public:
	typedef std::set< ork::Task * > type;
	
};

template<>
class LunaType< 55059854 > {
public:
	typedef vector< proland::EditGraphOrthoLayer::VertexData > type;
	
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
class LunaType< 94394620 > {
public:
	typedef ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > type;
	
};

template<>
class LunaType< 71786532 > {
public:
	typedef std::set< ork::ptr< ork::Task > > type;
	
};

template<>
class LunaType< 75010607 > {
public:
	typedef std::vector< ork::ptr< proland::TileProducer > > type;
	
};

template<>
class LunaType< 1587166 > {
public:
	typedef std::vector< proland::ParticleStorage::Particle * >::iterator type;
	
};

template<>
class LunaType< 40518290 > {
public:
	typedef std::pair< int, std::pair< int, std::pair< int, int > > > type;
	
};

template<>
class LunaType< 22464234 > {
public:
	typedef std::vector< proland::TweakViewHandler::Position > type;
	
};

template<>
class LunaType< 55852521 > {
public:
	typedef vector< ork::vec4d > type;
	
};

template<>
class LunaType< 33653159 > {
public:
	typedef vector< ork::ptr< proland::PlantsProducer > > type;
	
};

template<>
class LunaType< 69005068 > {
public:
	typedef set< proland::TileCache::Tile::Id > type;
	
};

template<>
class LunaType< 5903696 > {
public:
	typedef ork::Mesh< ork::vec4f, unsigned int > type;
	
};

template<>
class LunaType< 96783188 > {
public:
	typedef set< proland::TileCache::Tile * > type;
	
};

template<>
class LunaType< 99348114 > {
public:
	typedef set< proland::NodeId > type;
	
};

template<>
class LunaType< 49338298 > {
public:
	typedef vector< proland::Vertex > type;
	
};

template<>
class LunaType< 60197354 > {
public:
	typedef vector< proland::CurvePart * > type;
	
};

template<>
class LunaType< 22882411 > {
public:
	typedef set< proland::AreaId > type;
	
};

template<>
class LunaType< 61157517 > {
public:
	typedef vector< proland::CurveId > type;
	
};

template<>
class LunaType< 87264125 > {
public:
	typedef map< proland::CurveId, int > type;
	
};

template<>
class LunaType< 55792939 > {
public:
	typedef vector< ork::vec2d > type;
	
};

template<>
class LunaType< 31876471 > {
public:
	typedef std::set< proland::CurveId > type;
	
};

template<>
class LunaType< 63279285 > {
public:
	typedef list< proland::AreaId > type;
	
};

template<>
class LunaType< 54471397 > {
public:
	typedef vector< ork::ptr< proland::HydroCurve > > type;
	
};

template<>
class LunaType< 73900203 > {
public:
	typedef vector< ork::ptr< proland::GraphProducer > > type;
	
};

template<>
class LunaType< 68532613 > {
public:
	typedef ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > type;
	
};

template<>
class LunaType< 38469397 > {
public:
	typedef ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > type;
	
};

template<>
class LunaType< 55797744 > {
public:
	typedef vector< ork::vec2i > type;
	
};

template<>
class LunaType< 56225570 > {
public:
	typedef ork::static_ptr< ork::Program > type;
	
};

template<>
class LunaType< 45755873 > {
public:
	typedef ork::static_ptr< ork::Uniform2f > type;
	
};

template<>
class LunaType< 13889182 > {
public:
	typedef map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 2286263 > {
public:
	typedef osg::RenderInfo type;
	
};

template<>
class LunaType< 27834872 > {
public:
	typedef std::vector< unsigned int > type;
	
};

template<>
class LunaType< 95416160 > {
public:
	typedef std::vector< std::string > type;
	
};

template<>
class LunaType< 92299338 > {
public:
	typedef std::vector< int > type;
	
};

template<>
class LunaType< 77249888 > {
public:
	typedef std::vector< float > type;
	
};

template<>
class LunaType< 18903838 > {
public:
	typedef osg::Matrixd type;
	
};


#endif


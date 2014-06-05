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
	Luna< ork::Task >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"proland");
	Luna< proland::GraphProducer::GraphFactory >::Register(L);
	Luna< proland::GraphProducer::LazyGraphFactory >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< mfs_file >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"ork");
	Luna< ork::Buffer::Parameters >::Register(L);
	Luna< ork::FrameBuffer::Parameters >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"proland");
	Luna< proland::BasicViewHandler::Position >::Register(L);
	Luna< proland::Margin >::Register(L);
	Luna< proland::HydroFlowProducer::RiverMargin >::Register(L);
	Luna< proland::EditGraphOrthoLayer::SelectionData >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"ork");
	Luna< ork::ResourceDescriptor >::Register(L);
	Luna< ork::CompiledResourceLoader::StaticResourceDescriptor >::Register(L);
	Luna< ork::SetTargetTask::Target >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"proland");
	Luna< proland::DrawRiversTask::TerrainInfo >::Register(L);
	Luna< proland::AbstractTileCache::Tile >::Register(L);
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
	Luna< TwBar >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"proland");
	Luna< proland::DrawRiversTask::vecParticle >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"ork");
	Luna< ork::Font::Vertex >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"proland");
	Luna< proland::TreeMesh::Vertex >::Register(L);
	Luna< proland::EditGraphOrthoLayer::VertexData >::Register(L);
	Luna< proland::ViewManager >::Register(L);
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
	Luna< ork::ResourceLoader >::Register(L);
	Luna< ork::CompiledResourceLoader >::Register(L);
	Luna< ork::Resource >::Register(L);
	Luna< ork::XMLResourceLoader >::Register(L);
	Luna< ork::ResourceCompiler >::Register(L);
	Luna< ork::ResourceFactory >::Register(L);
	Luna< ork::ResourceManager >::Register(L);
	Luna< ork::TaskFactory >::Register(L);
	Luna< ork::AbstractTask >::Register(L);
	Luna< ork::CallMethodTask >::Register(L);
	Luna< ork::DrawMeshTask >::Register(L);
	Luna< ork::LoopTask >::Register(L);
	Luna< ork::Method >::Register(L);
	Luna< ork::SceneManager >::Register(L);
	Luna< ork::SceneNode >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< ork::SetIterator< std::string > >::Register(L);
	Luna< ork::MapIterator< std::string, ork::ptr< ork::Value > > >::Register(L);
	Luna< ork::MapIterator< std::string, ork::ptr< ork::Module > > >::Register(L);
	Luna< ork::MapIterator< std::string, ork::ptr< ork::MeshBuffers > > >::Register(L);
	Luna< ork::MapIterator< std::string, ork::ptr< ork::Object > > >::Register(L);
	Luna< ork::MapIterator< std::string, ork::ptr< ork::Method > > >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"ork");
	Luna< ork::SequenceTask >::Register(L);
	Luna< ork::SetProgramTask >::Register(L);
	Luna< ork::SetStateTask >::Register(L);
	Luna< ork::SetStateTask::Runnable >::Register(L);
	Luna< ork::SetTargetTask >::Register(L);
	Luna< ork::SetTransformsTask >::Register(L);
	Luna< ork::ShowInfoTask >::Register(L);
	Luna< ork::ShowLogTask >::Register(L);
	Luna< ork::Scheduler >::Register(L);
	Luna< ork::MultithreadScheduler >::Register(L);
	Luna< ork::TaskListener >::Register(L);
	Luna< ork::TaskGraph >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< ork::SetIterator< ork::ptr< ork::Task > > >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"ork");
	Luna< ork::EventHandler >::Register(L);
	Luna< ork::Window >::Register(L);
	Luna< ork::GlutWindow >::Register(L);
	Luna< ork::Window::Parameters >::Register(L);
	Luna< ork::Font >::Register(L);
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
	Luna< proland::seg2< float > >::Register(L);
	Luna< proland::seg2< double > >::Register(L);
	Luna< ork::ptr< proland::Graph > >::Register(L);
	Luna< ork::ptr< proland::Node > >::Register(L);
	Luna< ork::ptr< proland::Curve > >::Register(L);
	Luna< ork::static_ptr< proland::Curve > >::Register(L);
	Luna< ork::ptr< proland::Area > >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"proland");
	Luna< proland::ParticleLayer >::Register(L);
	Luna< proland::LifeCycleParticleLayer >::Register(L);
	Luna< proland::LifeCycleParticleLayer::LifeCycleParticle >::Register(L);
	Luna< proland::ParticleProducer >::Register(L);
	Luna< proland::ParticleStorage >::Register(L);
	Luna< proland::ParticleStorage::Particle >::Register(L);
	Luna< proland::RandomParticleLayer >::Register(L);
	Luna< proland::RandomParticleLayer::RandomParticle >::Register(L);
	Luna< proland::ParticleGrid >::Register(L);
	Luna< proland::ScreenParticleLayer >::Register(L);
	Luna< proland::ScreenParticleLayer::ScreenParticle >::Register(L);
	Luna< proland::FlowTile >::Register(L);
	Luna< proland::TerrainParticleLayer >::Register(L);
	Luna< proland::TerrainParticleLayer::TerrainInfo >::Register(L);
	Luna< proland::TerrainParticleLayer::TerrainParticle >::Register(L);
	Luna< proland::WorldParticleLayer >::Register(L);
	Luna< proland::WorldParticleLayer::WorldParticle >::Register(L);
	Luna< proland::TileStorage >::Register(L);
	Luna< proland::TileStorage::Slot >::Register(L);
	Luna< proland::GPUTileStorage >::Register(L);
	Luna< proland::GPUTileStorage::GPUSlot >::Register(L);
	Luna< proland::ObjectTileStorage >::Register(L);
	Luna< proland::ObjectTileStorage::ObjectSlot >::Register(L);
	Luna< proland::TileCache >::Register(L);
	Luna< proland::TileCache::Tile >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< std::pair< int, std::pair< int, int > > >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"proland");
	Luna< proland::TileLayer >::Register(L);
	Luna< proland::TileProducer >::Register(L);
	Luna< proland::Deformation >::Register(L);
	Luna< proland::CylindricalDeformation >::Register(L);
	Luna< proland::DrawTerrainTask >::Register(L);
	Luna< proland::ReadbackManager >::Register(L);
	Luna< proland::ReadbackManager::Callback >::Register(L);
	Luna< proland::SphericalDeformation >::Register(L);
	Luna< proland::TerrainNode >::Register(L);
	Luna< proland::TerrainQuad >::Register(L);
	Luna< proland::TileSampler >::Register(L);
	Luna< proland::TileSampler::TileFilter >::Register(L);
	Luna< proland::TileSamplerZ >::Register(L);
	Luna< proland::UpdateTerrainTask >::Register(L);
	Luna< proland::UpdateTileSamplersTask >::Register(L);
	Luna< proland::BasicViewHandler >::Register(L);
	Luna< proland::Recordable >::Register(L);
	Luna< proland::EventRecorder >::Register(L);
	Luna< proland::EventRecorder::Event >::Register(L);
	Luna< proland::MousePositionHandler >::Register(L);
	Luna< proland::SceneVisitor >::Register(L);
	Luna< proland::DrawTweakBarTask >::Register(L);
	Luna< proland::TweakBarHandler >::Register(L);
	Luna< proland::TweakBarManager >::Register(L);
	Luna< proland::TweakBarManager::BarData >::Register(L);
	Luna< proland::TweakResource >::Register(L);
	Luna< proland::TweakResource::Data >::Register(L);
	Luna< proland::TweakSceneGraph >::Register(L);
	Luna< proland::TweakSceneGraph::TextureInfo >::Register(L);
	Luna< proland::TweakViewHandler >::Register(L);
	Luna< proland::TweakViewHandler::Position >::Register(L);
	Luna< proland::TerrainViewController >::Register(L);
	Luna< proland::CylinderViewController >::Register(L);
	Luna< proland::PlanetViewController >::Register(L);
	Luna< proland::CPUElevationProducer >::Register(L);
	Luna< proland::ElevationProducer >::Register(L);
	Luna< proland::NormalProducer >::Register(L);
	Luna< proland::ResidualProducer >::Register(L);
	Luna< proland::EmptyOrthoLayer >::Register(L);
	Luna< proland::OrthoCPUProducer >::Register(L);
	Luna< proland::OrthoGPUProducer >::Register(L);
	Luna< proland::OrthoProducer >::Register(L);
	Luna< proland::TextureLayer >::Register(L);
	Luna< proland::TextureLayer::BlendParams >::Register(L);
	Luna< proland::AbstractTileCache >::Register(L);
	Luna< proland::FloatTileCache >::Register(L);
	Luna< proland::FloatTileCache::FloatTile >::Register(L);
	Luna< proland::DemTileCache >::Register(L);
	Luna< proland::ElevationTileCache >::Register(L);
	Luna< proland::PlanetElevationTileCache >::Register(L);
	Luna< proland::ApertureMipmap >::Register(L);
	Luna< proland::ColorMipmap >::Register(L);
	Luna< proland::ColorMipmap::ColorFunction >::Register(L);
	Luna< proland::HeightMipmap >::Register(L);
	Luna< proland::HeightMipmap::HeightFunction >::Register(L);
	Luna< proland::InputMap >::Register(L);
	Luna< proland::AtmoParameters >::Register(L);
	Luna< proland::AtmoProcessor >::Register(L);
	Luna< proland::DrawOceanFFTTask >::Register(L);
	Luna< proland::DrawOceanTask >::Register(L);
	Luna< proland::DrawPlantsShadowTask >::Register(L);
	Luna< proland::DrawPlantsTask >::Register(L);
	Luna< proland::LccProducer >::Register(L);
	Luna< proland::Plants >::Register(L);
	Luna< proland::PlantsProducer >::Register(L);
	Luna< proland::TreeMesh >::Register(L);
	Luna< proland::CurveData >::Register(L);
	Luna< proland::ElevationCurveData >::Register(L);
	Luna< proland::GraphListener >::Register(L);
	Luna< proland::CurveDataFactory >::Register(L);
	Luna< proland::GraphLayer >::Register(L);
	Luna< proland::ElevationGraphLayer >::Register(L);
	Luna< proland::RoadElevationLayer >::Register(L);
	Luna< proland::RoadElevationLayer::RoadElevationCurveData >::Register(L);
	Luna< proland::WaterElevationLayer >::Register(L);
	Luna< proland::WaterElevationLayer::WaterElevationCurveData >::Register(L);
	Luna< proland::Area >::Register(L);
	Luna< proland::CurvePart >::Register(L);
	Luna< proland::BasicCurvePart >::Register(L);
	Luna< proland::Graph >::Register(L);
	Luna< proland::BasicGraph >::Register(L);
	Luna< proland::BasicGraph::BasicCurveIterator >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< multimap< proland::CurveId, proland::CurvePtr > >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"proland");
	Luna< proland::ComposedMargin >::Register(L);
	Luna< proland::Vertex >::Register(L);
	Luna< proland::Curve >::Register(L);
	Luna< proland::FileReader >::Register(L);
	Luna< proland::FileWriter >::Register(L);
	Luna< proland::NodeId >::Register(L);
	Luna< proland::CurveId >::Register(L);
	Luna< proland::AreaId >::Register(L);
	Luna< proland::Graph::Changes >::Register(L);
	Luna< proland::LazyArea >::Register(L);
	Luna< proland::LazyCurve >::Register(L);
	Luna< proland::LazyGraph >::Register(L);
	Luna< proland::Node >::Register(L);
	Luna< proland::LazyNode >::Register(L);
	Luna< proland::LineCurvePart >::Register(L);
	Luna< proland::GraphProducer >::Register(L);
	Luna< proland::Tesselator >::Register(L);
	Luna< proland::FieldsOrthoLayer >::Register(L);
	Luna< proland::ForestOrthoLayer >::Register(L);
	Luna< proland::LineOrthoLayer >::Register(L);
	Luna< proland::MaskOrthoLayer >::Register(L);
	Luna< proland::MaskOrthoLayer::BlendParams >::Register(L);
	Luna< proland::OrthoMargin >::Register(L);
	Luna< proland::RoadOrthoLayer >::Register(L);
	Luna< proland::WaterOrthoLayer >::Register(L);
	Luna< proland::WaveTile >::Register(L);
	Luna< proland::AnimatedPerlinWaveTile >::Register(L);
	Luna< proland::DrawRiversTask >::Register(L);
	Luna< proland::HydroCurve >::Register(L);
	Luna< proland::HydroGraph >::Register(L);
	Luna< proland::HydroGraphFactory >::Register(L);
	Luna< proland::LazyHydroCurve >::Register(L);
	Luna< proland::LazyHydroGraph >::Register(L);
	Luna< proland::LazyHydroGraphFactory >::Register(L);
	Luna< proland::HydroFlowProducer >::Register(L);
	Luna< proland::HydroFlowTile >::Register(L);
	Luna< proland::PerlinWaveTile >::Register(L);
	Luna< proland::UpdateRiversTask >::Register(L);
	Luna< proland::TweakRivers >::Register(L);
	Luna< proland::Editor >::Register(L);
	Luna< proland::EditElevationProducer >::Register(L);
	Luna< proland::EditGraphOrthoLayer >::Register(L);
	Luna< proland::EditGraphOrthoLayer::EditGraphHandler >::Register(L);
	Luna< proland::EditGraphOrthoLayer::EditGraphHandlerList >::Register(L);
	Luna< proland::EditHydroGraphOrthoLayer >::Register(L);
	Luna< proland::EditHydroGraphOrthoLayer::EditHydroGraphHandler >::Register(L);
	Luna< proland::EditorHandler >::Register(L);
	Luna< proland::EditOrthoCPUProducer >::Register(L);
	Luna< proland::EditOrthoProducer >::Register(L);
	Luna< proland::EditResidualProducer >::Register(L);
	Luna< proland::TweakDemEditor >::Register(L);
	Luna< proland::TweakGraphLayer >::Register(L);
	Luna< proland::TweakHydroGraphLayer >::Register(L);
	Luna< proland::TweakOrthoEditor >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"std");
	Luna< std::type_info >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< ork::Mesh< ork::vec2f, unsigned int > >::Register(L);
	Luna< std::vector< ork::ptr< ork::Module > > >::Register(L);
	Luna< std::vector< ork::ptr< ork::TaskFactory > > >::Register(L);
	Luna< std::vector< ork::SetTargetTask::Target > >::Register(L);
	Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::Register(L);
	Luna< map< ork::ptr< ork::SceneNode >, ork::ptr< proland::TerrainNode > > >::Register(L);
	Luna< vector< proland::TweakBarManager::BarData > >::Register(L);
	Luna< set< int > >::Register(L);
	Luna< std::set< ork::Task * > >::Register(L);
	Luna< vector< proland::EditGraphOrthoLayer::VertexData > >::Register(L);
	Luna< osg::BoundingBox >::Register(L);
	Luna< ork::static_ptr< ork::Logger > >::Register(L);
	Luna< std::set< ork::Program * > >::Register(L);
	Luna< std::vector< ork::ptr< ork::Uniform > > >::Register(L);
	Luna< uint64_t >::Register(L);
	Luna< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::Register(L);
	Luna< std::set< ork::ptr< ork::Task > > >::Register(L);
	Luna< std::vector< ork::ptr< proland::TileProducer > > >::Register(L);
	Luna< std::vector< proland::ParticleStorage::Particle * >::iterator >::Register(L);
	Luna< std::pair< int, std::pair< int, std::pair< int, int > > > >::Register(L);
	Luna< std::vector< proland::TweakViewHandler::Position > >::Register(L);
	Luna< vector< ork::vec4d > >::Register(L);
	Luna< vector< ork::ptr< proland::PlantsProducer > > >::Register(L);
	Luna< set< proland::TileCache::Tile::Id > >::Register(L);
	Luna< ork::Mesh< ork::vec4f, unsigned int > >::Register(L);
	Luna< set< proland::TileCache::Tile * > >::Register(L);
	Luna< set< proland::NodeId > >::Register(L);
	Luna< vector< proland::Vertex > >::Register(L);
	Luna< vector< proland::CurvePart * > >::Register(L);
	Luna< set< proland::AreaId > >::Register(L);
	Luna< vector< proland::CurveId > >::Register(L);
	Luna< map< proland::CurveId, int > >::Register(L);
	Luna< vector< ork::vec2d > >::Register(L);
	Luna< std::set< proland::CurveId > >::Register(L);
	Luna< list< proland::AreaId > >::Register(L);
	Luna< vector< ork::ptr< proland::HydroCurve > > >::Register(L);
	Luna< vector< ork::ptr< proland::GraphProducer > > >::Register(L);
	Luna< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::Register(L);
	Luna< ork::static_ptr< ork::Mesh< ork::vec3f, unsigned int > > >::Register(L);
	Luna< vector< ork::vec2i > >::Register(L);
	Luna< ork::static_ptr< ork::Program > >::Register(L);
	Luna< ork::static_ptr< ork::Uniform2f > >::Register(L);
	Luna< map< proland::EditGraphOrthoLayer *, proland::EditGraphOrthoLayer::EditGraphHandler * > >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"land");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"ork");
	luna_copyParents(L,"proland");
	luna_copyParents(L,"land");
	luna_copyParents(L,"std");

	luna_pushModule(L,"land");
	return 1;
}

#ifdef __cplusplus
}
#endif


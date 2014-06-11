#include <stdlib.h>

#include "ork/core/FileLogger.h"
#include "ork/render/FrameBuffer.h"
#include "ork/resource/ResourceTemplate.h"
#include "ork/resource/XMLResourceLoader.h"
#include "ork/scenegraph/SceneManager.h"
#include "ork/scenegraph/ShowLogTask.h"
#include "ork/ui/GlutWindow.h"

#include "proland/ui/BasicViewHandler.h"
#include "proland/ui/twbar/TweakBarManager.h"
#include "proland/util/TerrainViewController.h"

#include "proland/TerrainPlugin.h"
#include "proland/producer/TileProducer.h"
#include "proland/producer/GPUTileStorage.h"

using namespace ork;
using namespace proland;

ptr<FrameBuffer> createContourFramebuffer(ptr<Texture2D> contourTexture)
{
    int tileWidth = contourTexture->getWidth();
    ptr<FrameBuffer> frameBuffer(new FrameBuffer());
    frameBuffer->setReadBuffer(COLOR0);
    frameBuffer->setDrawBuffer(COLOR0);
    frameBuffer->setViewport(vec4<GLint>(0, 0, tileWidth, tileWidth));
    frameBuffer->setTextureBuffer(COLOR0, contourTexture, 0);
    frameBuffer->setPolygonMode(FILL, FILL);
    frameBuffer->setDepthTest(false);
    return frameBuffer;
}

static_ptr< Factory< ptr<Texture2D>, ptr<FrameBuffer> > > contourFramebufferFactory(
    new Factory< ptr<Texture2D>, ptr<FrameBuffer> >(createContourFramebuffer));

class ContourLineProducer : public TileProducer
{
public:
    ContourLineProducer(ptr<TileCache> cache, ptr<TileProducer> elevationTiles,
        ptr<Texture2D> contourTexture, ptr<Program> contourProgram) :
            TileProducer("ContourLineProducer", "CreateContourTile")
    {
        init(cache, elevationTiles, contourTexture, contourProgram);
    }

    virtual ~ContourLineProducer()
    {
    }

    virtual void getReferencedProducers(vector< ptr<TileProducer> > &producers) const
    {
        producers.push_back(elevationTiles);
    }

    virtual int getBorder()
    {
        return 2;
    }

    virtual bool hasTile(int level, int tx, int ty)
    {
        return elevationTiles->hasTile(level, tx, ty);
    }

protected:
    ContourLineProducer() : TileProducer("ContourLineProducer", "CreateContourTile")
    {
    }

    void init(ptr<TileCache> cache, ptr<TileProducer> elevationTiles,
        ptr<Texture2D> contourTexture, ptr<Program> contourProgram)
    {
        TileProducer::init(cache, true);
        this->frameBuffer = contourFramebufferFactory->get(contourTexture);
        this->elevationTiles = elevationTiles;
        this->contourTexture = contourTexture;
        this->contourProgram = contourProgram;
        this->elevationSamplerU = contourProgram->getUniformSampler("elevationSampler");
        this->elevationOSLU = contourProgram->getUniform4f("elevationOSL");
    }

    virtual void *getContext() const
    {
        return contourTexture.get();
    }

    virtual ptr<Task> startCreateTile(int level, int tx, int ty, unsigned int deadline, ptr<Task> task, ptr<TaskGraph> owner)
    {
        ptr<TaskGraph> result = owner == NULL ? createTaskGraph(task) : owner;
        TileCache::Tile *t = elevationTiles->getTile(level, tx, ty, deadline);
        assert(t != NULL);
        result->addTask(t->task);
        result->addDependency(task, t->task);
        return result;
    }

    virtual bool doCreateTile(int level, int tx, int ty, TileStorage::Slot *data)
    {
        if (Logger::DEBUG_LOGGER != NULL) {
            ostringstream oss;
            oss << "Contour tile " << getId() << " " << level << " " << tx << " " << ty;
            Logger::DEBUG_LOGGER->log("ORTHO", oss.str());
        }

        GPUTileStorage::GPUSlot *gpuData = dynamic_cast<GPUTileStorage::GPUSlot*>(data);
        assert(gpuData != NULL);

        // don't forget this!
        getCache()->getStorage().cast<GPUTileStorage> ()->notifyChange(gpuData);

        int tileWidth = data->getOwner()->getTileSize();

        ptr<Texture> storage = getCache()->getStorage().cast<GPUTileStorage>()->getTexture(0);

        TileCache::Tile *t = elevationTiles->findTile(level, tx, ty);
        assert(t != NULL);
        GPUTileStorage::GPUSlot *elevationGpuData = dynamic_cast<GPUTileStorage::GPUSlot*>(t->getData());
        assert(elevationGpuData != NULL);

        int zTileWidth = elevationGpuData->getWidth();
        float scale = ((zTileWidth - 5.0) / zTileWidth) * (tileWidth / (tileWidth - 4.0));
        float offset = (1.0 - scale) / 2.0;

        elevationSamplerU->set(elevationGpuData->t);
        elevationOSLU->set(vec4f(offset, offset, scale, elevationGpuData->l));

        frameBuffer->drawQuad(contourProgram);
        gpuData->copyPixels(frameBuffer, 0, 0, tileWidth, tileWidth);
        return true;
    }

    virtual void stopCreateTile(int level, int tx, int ty)
    {
        TileCache::Tile *t = elevationTiles->findTile(level, tx, ty);
        assert(t != NULL);
        elevationTiles->putTile(t);
    }

    virtual void swap(ptr<ContourLineProducer> p)
    {
        TileProducer::swap(p);
        std::swap(frameBuffer, p->frameBuffer);
        std::swap(elevationTiles, p->elevationTiles);
        std::swap(contourTexture, p->contourTexture);
        std::swap(contourProgram, p->contourProgram);
        std::swap(elevationSamplerU, p->elevationSamplerU);
        std::swap(elevationOSLU, p->elevationOSLU);
    }

    ptr<Program> contourProgram;

private:
    ptr<FrameBuffer> frameBuffer;

    ptr<TileProducer> elevationTiles;

    ptr<Texture2D> contourTexture;

    ptr<UniformSampler> elevationSamplerU;

    ptr<Uniform4f> elevationOSLU;
};

class ContourLineProducerResource : public ResourceTemplate<50, ContourLineProducer>
{
public:
    ContourLineProducerResource(ptr<ResourceManager> manager, const string &name, ptr<ResourceDescriptor> desc, const TiXmlElement *e = NULL) :
        ResourceTemplate<50, ContourLineProducer>(manager, name, desc)
    {
        e = e == NULL ? desc->descriptor : e;
        ptr<TileCache> cache;
        ptr<TileProducer> elevations;
        ptr<Texture2D> contourTexture;
        ptr<Program> contourProgram;
        checkParameters(desc, e, "name,cache,elevations,contourProg,");
        cache = manager->loadResource(getParameter(desc, e, "cache")).cast<TileCache>();
        elevations = manager->loadResource(getParameter(desc, e, "elevations")).cast<TileProducer>();
        string contour = "contourShader;";
        if (e->Attribute("contourProg") != NULL) {
            contour = getParameter(desc, e, "contourProg");
        }
        contourProgram = manager->loadResource(contour).cast<Program>();

        int tileSize = cache->getStorage()->getTileSize();
        const char* format = cache->getStorage().cast<GPUTileStorage>()->getTexture(0)->getInternalFormatName();

        ostringstream contourTex;
        contourTex << "renderbuffer-" << tileSize << "-" << format;
        contourTexture = manager->loadResource(contourTex.str()).cast<Texture2D>();

        init(cache, elevations, contourTexture, contourProgram);
    }

    virtual bool prepareUpdate()
    {
        if (dynamic_cast<Resource*>(contourProgram.get())->changed()) {
            invalidateTiles();
        }
        return ResourceTemplate<50, ContourLineProducer>::prepareUpdate();
    }
};

extern const char contourProducer[] = "contourProducer";

static ResourceFactory::Type<contourProducer, ContourLineProducerResource> ContourLineProducerType;

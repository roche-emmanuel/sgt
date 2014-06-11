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
#include "proland/producer/TileLayer.h"
#include "proland/producer/GPUTileStorage.h"

using namespace ork;
using namespace proland;

class DebugOrthoLayer : public TileLayer
{
public:
    DebugOrthoLayer(ptr<Font> f, ptr<Program> p, float fontHeight) : TileLayer("DebugOrthoLayer")
    {
        TileLayer::init(false);
        init(f, p, fontHeight);
    }

    virtual ~DebugOrthoLayer()
    {
    }

    virtual bool doCreateTile(int level, int tx, int ty, TileStorage::Slot *data)
    {
        if (Logger::DEBUG_LOGGER != NULL) {
            ostringstream oss;
            oss << "Debug tile " << getProducerId() << " " << level << " " << tx << " " << ty;
            Logger::DEBUG_LOGGER->log("ORTHO", oss.str());
        }

        ostringstream os;
        os << dynamic_cast<GPUTileStorage::GPUSlot*>(data)->l;

        ptr<FrameBuffer> fb = SceneManager::getCurrentFrameBuffer();
        vec4f vp = fb->getViewport().cast<float>();
        fb->setBlend(true, ADD, SRC_ALPHA, ONE_MINUS_SRC_ALPHA, ADD, ZERO, ONE);
        fontMesh->clear();
        font->addLine(vp, 2.0f, 2.0f, os.str(), fontHeight, 0xFF0000FF, fontMesh);
        fontU->set(font->getImage());
        fb->draw(fontProgram, *fontMesh);
        fb->setBlend(false);
        return true;
    }

protected:
    DebugOrthoLayer() : TileLayer("DebugOrthoLayer")
    {
    }

    void init(ptr<Font> f, ptr<Program> p, float fontHeight)
    {
        this->font = f;
        this->fontProgram = p;
        this->fontHeight = fontHeight;
        this->fontU = p->getUniformSampler("font");
        if (fontMesh == NULL) {
            fontMesh = new Mesh<Font::Vertex, unsigned int>(TRIANGLES, CPU);
            fontMesh->addAttributeType(0, 4, A16F, false);
            fontMesh->addAttributeType(1, 4, A8UI, true);
        }
    }

    virtual void swap(ptr<DebugOrthoLayer> p)
    {
        TileLayer::swap(p);
        std::swap(font, p->font);
        std::swap(fontProgram, p->fontProgram);
        std::swap(fontHeight, p->fontHeight);
    }

private:
    ptr<Font> font;

    ptr<Program> fontProgram;

    float fontHeight;

    ptr<UniformSampler> fontU;

    static static_ptr< Mesh<Font::Vertex, unsigned int> > fontMesh;
};

static_ptr< Mesh<Font::Vertex, unsigned int> > DebugOrthoLayer::fontMesh;

class DebugOrthoLayerResource : public ResourceTemplate<40, DebugOrthoLayer>
{
public:
    DebugOrthoLayerResource(ptr<ResourceManager> manager, const string &name, ptr<ResourceDescriptor> desc,
            const TiXmlElement *e = NULL) :
        ResourceTemplate<40, DebugOrthoLayer> (manager, name, desc)
    {
        e = e == NULL ? desc->descriptor : e;
        checkParameters(desc, e, "name,font,fontSize,fontProgram,");
        string fontName = "defaultFont";
        if (e->Attribute("font") != NULL) {
            fontName = Resource::getParameter(desc, e, "font");
        }
        ptr<Font> f = manager->loadResource(fontName).cast<Font>();

        float size = f->getTileHeight();
        if (e->Attribute("fontSize") != NULL) {
            getFloatParameter(desc, e, "fontSize", &size);
        }

        string fontProgram = "text;";
        if (e->Attribute("fontProgram") != NULL) {
            fontProgram = string(e->Attribute("fontProgram"));
        }
        ptr<Program> p = manager->loadResource(fontProgram).cast<Program>();

        init(f, p, size);
    }

    virtual bool prepareUpdate()
    {
        oldValue = NULL;
        newDesc = NULL;
        return true;
    }
};

extern const char debugOrthoLayer[] = "debugOrthoLayer";

static ResourceFactory::Type<debugOrthoLayer, DebugOrthoLayerResource> DebugOrthoLayerType;

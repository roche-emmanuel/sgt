#include "plug_common.h"

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
#include "proland/terrain/TerrainNode.h"

using namespace ork;
using namespace proland;

class DrawTerrainBoxTask : public AbstractTask
{
public:
    DrawTerrainBoxTask(const QualifiedName &terrain, const QualifiedName &mesh, bool culling) :
        AbstractTask("DrawTerrainBoxTask")
	{
	    init(terrain, mesh, culling);
	}

    virtual ~DrawTerrainBoxTask()
    {
	}

    virtual ptr<Task> getTask(ptr<Object> context)
    {
        ptr<SceneNode> n = context.cast<Method>()->getOwner();

		ptr<TerrainNode> t = NULL;
		ptr<SceneNode> target = terrain.getTarget(n);
		if (target == NULL) {
			t = n->getOwner()->getResourceManager()->loadResource(terrain.name).cast<TerrainNode>();
		} else {
			t = target->getField(terrain.name).cast<TerrainNode>();
		}
		if (t == NULL) {
			if (Logger::ERROR_LOGGER != NULL) {
				Logger::ERROR_LOGGER->log("TERRAIN", "DrawTerrainBox : cannot find terrain '" + terrain.target + "." + terrain.name + "'");
			}
			throw exception();
		}

		ptr<MeshBuffers> m = NULL;
		target = mesh.getTarget(n);
		if (target == NULL) {
			m = n->getOwner()->getResourceManager()->loadResource(mesh.name + ".mesh").cast<MeshBuffers>();
		} else {
			m = target->getMesh(mesh.name);
		}
		if (m == NULL) {
			if (Logger::ERROR_LOGGER != NULL) {
				Logger::ERROR_LOGGER->log("SCENEGRAPH", "DrawMesh : cannot find mesh '" + mesh.target + "." + mesh.name + "'");
			}
			throw exception();
		}
		return new Impl(n, t, m, culling);
	}

protected:
    DrawTerrainBoxTask() : AbstractTask("DrawTerrainBoxTask")
	{
	}

    void init(const QualifiedName &terrain, const QualifiedName &mesh, bool culling)
	{
		this->terrain = terrain;
		this->mesh = mesh;
		this->culling = culling;
	}

    void swap(ptr<DrawTerrainBoxTask> t)
    {
	    std::swap(*this, *t);
	}

private:
    QualifiedName terrain;

    QualifiedName mesh;

    bool culling;

    class Impl : public Task
    {
    public:
        ptr<SceneNode> n;

        ptr<TerrainNode> t;

        ptr<MeshBuffers> m;

        bool culling;

        Impl(ptr<SceneNode> n, ptr<TerrainNode> t, ptr<MeshBuffers> m, bool culling) :
		    Task("DrawTerrainBox", true, 0), n(n), t(t), m(m), culling(culling)
        {
		}

        virtual ~Impl()
        {
		}

        virtual bool run()
        {
			if (t != NULL) {
				if (Logger::DEBUG_LOGGER != NULL) {
					Logger::DEBUG_LOGGER->log("TERRAIN", "DrawTerrainBox");
				}
				ptr<FrameBuffer> fb = SceneManager::getCurrentFrameBuffer();
				ptr<Program> p = SceneManager::getCurrentProgram();
				t->deform->setUniforms(n, t, p);
				drawQuad(t->root);
			}
			return true;
		}

        void drawQuad(ptr<TerrainQuad> q)
        {
			if (culling && q->visible == SceneManager::INVISIBLE) {
				return;
			}
			if (q->isLeaf()) {
                ptr<Program> p = SceneManager::getCurrentProgram();
                p->getUniform2f("zminmax")->set(vec2f(q->zmin, q->zmax));
				t->deform->setUniforms(n, q, p);
    			if (m->nindices == 0) {
					SceneManager::getCurrentFrameBuffer()->draw(p, *m, m->mode, 0, m->nvertices);
				} else {
					SceneManager::getCurrentFrameBuffer()->draw(p, *m, m->mode, 0, m->nindices);
				}
			} else {
				for (int i = 0; i < 4; ++i) {
					drawQuad(q->children[i]);
				}
			}
		}
    };
};

class DrawTerrainBoxTaskResource : public ResourceTemplate<40, DrawTerrainBoxTask>
{
public:
    DrawTerrainBoxTaskResource(ptr<ResourceManager> manager, const string &name, ptr<ResourceDescriptor> desc, const TiXmlElement *e = NULL) :
        ResourceTemplate<40, DrawTerrainBoxTask>(manager, name, desc)
    {
        e = e == NULL ? desc->descriptor : e;
        checkParameters(desc, e, "name,mesh,culling,");
        string n = getParameter(desc, e, "name");
        string m = getParameter(desc, e, "mesh");
        bool culling = false;
        if (e->Attribute("culling") != NULL && strcmp(e->Attribute("culling"), "true") == 0) {
            culling = true;
        }
        init(QualifiedName(n), QualifiedName(m), culling);
    }
};

extern const char drawTerrainBox[] = "drawTerrainBox";

static ResourceFactory::Type<drawTerrainBox, DrawTerrainBoxTaskResource> DrawTerrainBoxTaskType;

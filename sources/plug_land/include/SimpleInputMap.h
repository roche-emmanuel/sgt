#ifndef _SIMPLEINPUTMAP_H_
#define _SIMPLEINPUTMAP_H_

#include "stbi/stb_image.h"

#include "ork/core/FileLogger.h"
#include "ork/render/FrameBuffer.h"
#include "ork/resource/ResourceTemplate.h"
#include "ork/resource/XMLResourceLoader.h"
#include "ork/scenegraph/AbstractTask.h"
#include "ork/scenegraph/SceneManager.h"
#include "ork/scenegraph/ShowLogTask.h"
#include "ork/ui/GlutWindow.h"

#include "proland/preprocess/terrain/Preprocess.h"
#include "proland/ui/BasicViewHandler.h"
#include "proland/util/PlanetViewController.h"

class SimpleInputMap : public proland::InputMap
{
public:
  SimpleInputMap(const string &file, float scale, int width, int height, int channels, int tileSize, int cache = 20);

  ork::vec4f getValue(int x, int y);

protected:
  unsigned char *bitmap;
  float scale; 
};

#endif

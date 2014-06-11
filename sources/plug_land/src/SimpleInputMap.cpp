#include "plug_common.h"
#include "SimpleInputMap.h"

using namespace ork;
using namespace proland;

SimpleInputMap::SimpleInputMap(const string &file, float scale, int width, int height, int nchannels, int tileSize, int cache) : InputMap(width, height, nchannels, tileSize, cache), scale(scale)
{
    ifstream fs(file.c_str(), ios::binary);
    fs.seekg(0, ios::end);
    unsigned int size = fs.tellg();
    unsigned char *data = new unsigned char[size];
    fs.seekg(0);
    fs.read((char*) data, size);
    fs.close();
    int w, h, channels;
    bitmap = (unsigned char*) stbi_load_from_memory(data, size, &w, &h, &channels, 0);
    delete[] data;
}

vec4f SimpleInputMap::getValue(int x, int y)
{
    vec4f c;
    c.x = bitmap[(x + y * width) * 3] * scale;
    c.y = bitmap[(x + y * width) * 3 + 1] * scale;
    c.z = bitmap[(x + y * width) * 3 + 2] * scale;
    c.w = 0.0;
    return c;
}


#include "plug_extensions.h"

using namespace land;

ork::ptr<ork::SceneManager> ProlandDrawable::getScene()
{
	return manager;
}
	
ork::ptr<proland::TerrainViewController> ProlandDrawable::getViewController()
{
	return controller;
}

ork::vec3d ProlandDrawable::getWorldCoordinates(int x, int y)
{
	ork::vec3d p = manager->getWorldCoordinates(x, y);
	if (abs(p.x) > 100000.0 || abs(p.y) > 100000.0 || abs(p.z) > 100000.0) {
		p = vec3d(NAN, NAN, NAN);
	}
	//trDEBUG("Proland","Got point ("<<p.x<<", "<<p.y<<", "<<p.z<<") for input ("<<x<<", "<<y<<")");

	return p;
}

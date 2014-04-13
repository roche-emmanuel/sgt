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
	Luna< ork::Object::static_ref >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"land");
	Luna< land::ProlandDrawable >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"ork");
	Luna< ork::Object >::Register(L);
	Luna< ork::Logger >::Register(L);
	Luna< ork::FileLogger >::Register(L);
	Luna< ork::FileLogger::File >::Register(L);
	Luna< ork::Timer >::Register(L);
	Luna< ork::GPUTimer >::Register(L);
	Luna< ork::half >::Register(L);
	Luna< ork::vec2h >::Register(L);
	Luna< ork::vec2f >::Register(L);
	Luna< ork::vec2d >::Register(L);
	Luna< ork::vec2i >::Register(L);
	Luna< ork::vec3h >::Register(L);
	Luna< ork::vec3f >::Register(L);
	Luna< ork::vec3d >::Register(L);
	Luna< ork::vec3i >::Register(L);
	Luna< ork::vec4h >::Register(L);
	Luna< ork::vec4f >::Register(L);
	Luna< ork::vec4d >::Register(L);
	Luna< ork::vec4i >::Register(L);
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
	Luna< osg::BoundingBox >::Register(L);
	Luna< ork::static_ptr< ork::Logger > >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"land");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"ork");
	luna_copyParents(L,"land");

	luna_pushModule(L,"land");
	return 1;
}

#ifdef __cplusplus
}
#endif


#include "lunaCommon.h"
#include "lanes/threading.h"
#include "lanes/tools.h"
#include "lanes/keeper.h"
#include "lanes/lanes.h"
#include "lanes/deep.h"
#include "lua/ModuleProvider.h"

extern const unsigned char buf_lanes[];
extern unsigned int buf_lanes_len;

// Lua environment initialization method:
EnvInit_t gl_EnvInit_fn = NULL;

void env_id( lua_State*L, char const * const which);

int default_init_env(lua_State* L) {
	logDEBUG("Executing default init env method for L=" << (const void*)L);
	return 0;
}

// Minimal Lua environment structure:
struct LuaEnv {};

void doLog(int level, const std::string& msg) {
	LOG(level,msg);
}

void doLogV(int level, const std::string& msg) {
	LOG_V(level,msg);
}

void doTrace(int level, const std::string& trace, const std::string& msg) {
	TRACE(level, trace, msg);
}


void doTraceV(int level, const std::string& trace, const std::string& msg) {
	TRACE_V(level, trace, msg);
}

int lanesLoader(lua_State* L)
{
	// This method is called to load the "lanes.lua" module from the module provider:
	// std::string content = sgtModuleProvider::getModule("lanes");
	// CHECK_RET(!content.empty(),0,"Cannot find lanes module.");
	logDEBUG("Loading lanes.");
	
	if(luaL_loadbuffer(L,(const char*)buf_lanes,buf_lanes_len,"lanes")==0) {
		int res = lua_pcall(L, 0, 1, 0);
		if(res!=0) {
			logERROR("Error occurred in executing lanes.lua module :\n" << (res==LUA_ERRRUN ? lua_tostring(L,-1) : "[no message]"));
			return 0;				
		}
	}
	else {
		logERROR("Error occurred in loading lanes.lua:\n" << lua_tostring(L,-1));
		return 0;
	}
	
	logDEBUG("lanes loaded properly.");
	return 1;
}

int initEnv(lua_State* L)
{
	LuaEnv *env= (LuaEnv*)luaG_todeep( L, env_id, 1);
	CHECK_RET(env,0,"Invalid LuaEnv in initEnv");
	
	logINFO("Initializing LuaEnv for State " << (const void*)L);
	
	// we jsut execute the init function if we have one:
	if(gl_EnvInit_fn) {
		return gl_EnvInit_fn(L);
	}
	else {
		return default_init_env(L);
	}
}

static void env_id( lua_State*L, char const * const which)
{
	logDEBUG("Entering env_id with :" << which << " for L=" << (const void*)L);

    if (strcmp( which, "new" )==0)
    {
		logDEBUG("Creating new LuaEnv");
        struct LuaEnv *s = new LuaEnv();

		logDEBUG("Pushing lightuserdata");
        lua_pushlightuserdata( L, s );
		logDEBUG("Creation done.");
    }
    else if( strcmp( which, "delete" ) == 0)
    {
        struct s_Keeper* K;
        LuaEnv* l= (LuaEnv*)lua_touserdata( L, 1);
        ASSERT_L(l);

        /* Clean associated structures in the keeper state.
        */
        K = keeper_acquire( l);
        if( K && K->L) // can be NULL if this happens during main state shutdown (lanes is GC'ed -> no keepers -> no need to cleanup)
        {
            keeper_call( K->L, KEEPER_API( clear), L, l, 0);
        }
        keeper_release( K);

        delete l;
    }
    else if (strcmp( which, "metatable" )==0)
    {
		logDEBUG("Creating new LuaEnv metatable for L=" << (const void*)L);
        STACK_CHECK( L);
        lua_newtable(L);
        // metatable is its own index
        lua_pushvalue( L, -1);
        lua_setfield( L, -2, "__index");

        // protect metatable from external access
        lua_pushliteral( L, "LuaEnv");
        lua_setfield( L, -2, "__metatable");

        // lua_pushcfunction( L, LG_linda_tostring);
        // lua_setfield( L, -2, "__tostring");

        //
        // [-1]: linda metatable
        lua_pushcfunction( L, initEnv );
        lua_setfield( L, -2, "init" );

        STACK_END( L, 1);
    }
    else if( strcmp( which, "module") == 0)
    {
		logDEBUG("Returning nil module");
        lua_pushnil( L);
    }
}

int createEnv(lua_State* L)
{
	// Create the lua env userdata:
	logDEBUG("CreateEnv: trying to create LuaEnv...")
	int ret = luaG_deep_userdata( L, env_id);	
	CHECK_RET(ret==1,0,"Invalid create env result: " << ret);
	return ret;
}

void openLanes(lua_State* L) 
{
	CHECK(L,"Invalid lua state.");
	luaopen_lanes_embedded(L, lanesLoader);
	
	// We also add support form environment variable:
	lua_pushcfunction( L, createEnv);
	lua_setglobal( L, "createEnv"); 
}

void setLuaEnvInitFunction(EnvInit_t func)
{
	gl_EnvInit_fn = func;
}


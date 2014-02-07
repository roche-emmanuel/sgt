#if !defined( __keeper_h__)
#define __keeper_h__ 1

struct s_Keeper
{
	MUTEX_T lock_;
	lua_State *L;
	//int count;
};

#ifdef __cplusplus
extern "C" {
#endif

// if enabled, call close_keepers at the very last as we want to be sure no thread is GCing after.
// (and therefore may perform linda object dereferencing after keepers are gone)
// problem: maybe on some platforms (linux) atexit() is called after DLL/so are unloaded...
#define HAVE_KEEPER_ATEXIT_DESINIT 0

char const* init_keepers( lua_State* L);
#if !HAVE_KEEPER_ATEXIT_DESINIT
void close_keepers( void);
#endif // HAVE_KEEPER_ATEXIT_DESINIT

struct s_Keeper *keeper_acquire( const void *ptr);
void keeper_release( struct s_Keeper *K);
void keeper_toggle_nil_sentinels( lua_State *L, int _val_i, int _nil_to_sentinel);
int keeper_push_linda_storage( lua_State* L, void* ptr);

typedef lua_CFunction keeper_api_t;
#define KEEPER_API( _op) keepercall_ ## _op
#define PUSH_KEEPER_FUNC lua_pushcfunction
// lua_Cfunctions to run inside a keeper state (formerly implemented in Lua)
int keepercall_clear( lua_State* L);
int keepercall_send( lua_State* L);
int keepercall_receive( lua_State* L);
int keepercall_receive_batched( lua_State* L);
int keepercall_limit( lua_State* L);
int keepercall_get( lua_State* L);
int keepercall_set( lua_State* L);
int keepercall_count( lua_State* L);

int keeper_call( lua_State *K, keeper_api_t _func, lua_State *L, void *linda, uint_t starting_index);

#ifdef __cplusplus
}
#endif

#endif // __keeper_h__
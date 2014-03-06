#include <plug_common.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void register_defines(lua_State* L);
extern void register_enums(lua_State* L);
extern void register_global_functions(lua_State* L);

	
	
int PLUG_EXPORT luaopen_core(lua_State* L) {
	luna_open(L);

	luna_pushModule(L,"sgt");
	Luna< __int64 >::Register(L);
	Luna< __uint64 >::Register(L);
	Luna< BaseClass >::Register(L);
	Luna< HWND >::Register(L);
	Luna< uintptr_t >::Register(L);
	Luna< void >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"boost");
	Luna< boost::gregorian::date_duration >::Register(L);
	Luna< boost::gregorian::date_period >::Register(L);
	Luna< boost::gregorian::date >::Register(L);
	Luna< boost::gregorian::day_iterator >::Register(L);
	Luna< boost::gregorian::week_iterator >::Register(L);
	Luna< boost::gregorian::month_iterator >::Register(L);
	Luna< boost::gregorian::year_iterator >::Register(L);
	Luna< boost::posix_time::time_duration >::Register(L);
	Luna< boost::posix_time::hours >::Register(L);
	Luna< boost::posix_time::minutes >::Register(L);
	Luna< boost::posix_time::seconds >::Register(L);
	Luna< boost::posix_time::milliseconds >::Register(L);
	Luna< boost::posix_time::microseconds >::Register(L);
	Luna< boost::posix_time::ptime >::Register(L);
	Luna< boost::posix_time::time_period >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"OpenThreads");
	Luna< OpenThreads::Mutex >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"osg");
	Luna< osg::Referenced >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"sgt");
	Luna< sgt::ModuleProvider >::Register(L);
	Luna< sgt::ModuleManager >::Register(L);
	Luna< sgt::LogManager >::Register(L);
	Luna< std::vector< osg::ref_ptr< sgt::LogSink > > >::Register(L);
	Luna< std::map< int, int > >::Register(L);
	Luna< std::map< std::string, int > >::Register(L);
	Luna< sgt::LogManager::LogHandler >::Register(L);
	Luna< sgt::LogSink >::Register(L);
	Luna< std::set< std::string > >::Register(L);
	Luna< sgt::FileLogger >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"std");
	Luna< std::istream >::Register(L);
	Luna< std::ostream >::Register(L);
	luna_popModule(L);
	luna_pushModule(L,"sgt");
	Luna< OpenThreads::ScopedLock< OpenThreads::Mutex > >::Register(L);
	Luna< std::vector< int > >::Register(L);
	Luna< std::vector< float > >::Register(L);
	Luna< std::vector< double > >::Register(L);
	Luna< std::vector< void * > >::Register(L);
	luna_popModule(L);

	luna_pushModule(L,"sgt");

	register_defines(L);

	register_enums(L);

	luna_popModule(L);

	register_global_functions(L);

	luna_copyParents(L,"sgt");
	luna_copyParents(L,"boost");
	luna_copyParents(L,"OpenThreads");
	luna_copyParents(L,"osg");
	luna_copyParents(L,"std");

	luna_pushModule(L,"sgt");
	return 1;
}

#ifdef __cplusplus
}
#endif


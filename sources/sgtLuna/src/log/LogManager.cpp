#include "lunaCommon.h"

#include "log/LogManager.h"
#include "log/LogSink.h"
#include "log/StdLogger.h"

static osg::ref_ptr<sgtLogManager> singleton;
	
namespace sgt {

LogManager::~LogManager() {
	//std::cout << "WARNING: destroying LogManager object!" << std::endl;
}
	
/**
Log a given piece of information to the internal sinks.
*/
void LogManager::log(int level, std::string trace, std::string msg)
{	
	if(_handler.valid())
		_handler->handle(level,trace,msg);
	else
		doLog(level,trace,msg);
}

void LogManager::doLog(int level, std::string trace, std::string msg)
{	
	if(_sinks.empty())
		_sinks.push_back(new StdLogger("default_console_sink")); // add a console logger by default.

	// iterate on all the available sinks:
	for(SinkVector::iterator it = _sinks.begin(); it != _sinks.end(); ++it) {
		(*it)->process(level,trace,msg);
	}
}

/**
Returns the flags for a given level value.
*/
int LogManager::getLevelFlags(int level)
{
  // Bouml preserved body begin 0002EB8B
	LevelFlagMap::iterator it = _levelFlags.find(level);
	if(it==_levelFlags.end())
		return _defaultLevelFlags;
	return it->second;
  // Bouml preserved body end 0002EB8B
}

/**
Set the flags for a given level.
*/
void LogManager::setLevelFlags(int level, int flags)
{
  // Bouml preserved body begin 0002EC0B
	_levelFlags[level] = flags;
  // Bouml preserved body end 0002EC0B
}

/**
Returns the flags for a given trace value.
*/
int LogManager::getTraceFlags(std::string trace)
{
  // Bouml preserved body begin 0002EC8B
	TraceFlagMap::iterator it = _traceFlags.find(trace);
	if(it==_traceFlags.end())
		return _defaultTraceFlags;
	return it->second;
  // Bouml preserved body end 0002EC8B
}

/**
Set the flags for a given trace.
*/
void LogManager::setTraceFlags(std::string trace, int flags)
{
  // Bouml preserved body begin 0002ED0B
	_traceFlags[trace] = flags;
  // Bouml preserved body end 0002ED0B
}

/**
Add a new LogSink to the internal list.
*/
void LogManager::addSink(LogSink * sink)
{
  // Bouml preserved body begin 0002F00B
	if(sink)
		_sinks.push_back(sink);

	// DEBUG_MSG("Adding sink " + sink->getName())
  // Bouml preserved body end 0002F00B
}

bool LogManager::removeSink(LogSink * sink) {
	if(!sink)
		return false;

	for(SinkVector::iterator it = _sinks.begin(); it != _sinks.end(); ++it) {
		if((*it) == sink) {
			// DEBUG_MSG("Removing sink " + sink->getName())
			_sinks.erase(it);
			return true;
		}
	}
	return false;
}

bool LogManager::removeSink(const std::string& name) {
	for(SinkVector::iterator it = _sinks.begin(); it != _sinks.end(); ++it) {
		if((*it)->getName() == name) {
			// DEBUG_MSG("Removing sink " + name)
			_sinks.erase(it);
			return true;
		}
	}
	return false;
}

bool LogManager::removeAllSinks() {
	// DEBUG_MSG("Removing all sinks")
	_sinks.clear();
	return true;
};

LogSink* LogManager::getSink(const std::string& name) {
	for(SinkVector::iterator it = _sinks.begin(); it != _sinks.end(); ++it) {
		if((*it)->getName() == name) {
			return it->get();
		}
	}
	return NULL;
}

/**
Return current notify level.
*/
int LogManager::getNotifyLevel()
{
  // Bouml preserved body begin 0003098B
	return _notifyLevel;
  // Bouml preserved body end 0003098B
}

/**
Set current notify level.
*/
void LogManager::setNotifyLevel(int level)
{
  // Bouml preserved body begin 00030A0B
	_notifyLevel = level;
  // Bouml preserved body end 00030A0B
}

/**
Returns current verbosity mode.
*/
bool LogManager::getVerbose()
{
  // Bouml preserved body begin 00030A8B
	return _verbose;
  // Bouml preserved body end 00030A8B
}

/**
Set current verbosity mode.
*/
void LogManager::setVerbose(bool verbose)
{
  // Bouml preserved body begin 00030B0B
	_verbose = verbose;
  // Bouml preserved body end 00030B0B
}

std::string LogManager::getLevelString(int level)
{
  // Bouml preserved body begin 00030C0B
	switch(level) {
	case FATAL: return "FATAL";
	case ERROR: return "Error";
	case WARNING: return "Warning";
	case NOTICE: return "Notice";
	case INFO: return "Info";
	case DEBUG0: return "Debug";
	case DEBUG1: return "Debug 1";
	case DEBUG2: return "Debug 2";
	case DEBUG3: return "Debug 3";
	case DEBUG4: return "Debug 4";
	case DEBUG5: return "Debug 5";
	default: return "Debug X";
	}
  // Bouml preserved body end 00030C0B
}

std::string LogManager::getTimeStamp()
{
  // Bouml preserved body begin 00030C8B
	boost::posix_time::ptime currentTime = boost::posix_time::microsec_clock::local_time();
	return boost::posix_time::to_iso_extended_string(currentTime);
  // Bouml preserved body end 00030C8B
}

void LogManager::setDefaultTraceFlags(int val)
{
  // Bouml preserved body begin 00030D0B
	_defaultTraceFlags = val;
  // Bouml preserved body end 00030D0B
}

void LogManager::setDefaultLevelFlags(int val)
{
  // Bouml preserved body begin 00030D8B
	_defaultLevelFlags = val;
  // Bouml preserved body end 00030D8B
}



LogManager& LogManager::instance() {
	if(!singleton) {
		singleton = new sgtLogManager;
		trINFO_V("LogManager","Created LogManager singleton");
	}

	return *singleton;
}

void LogManager::destroy() {
	if(singleton) {
		// destroy the singleton:
		// trINFO_V("LogManager","Destroying LogManager singleton");
		singleton = NULL;
	}
}

} // namespace sgt

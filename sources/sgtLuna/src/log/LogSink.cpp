#include "lunaCommon.h"

#include "log/LogSink.h"

namespace sgt {

LogSink::LogSink(const std::string& name) {
	setName(name);
	_minLevel = -1;
	_maxLevel = -1;
	_logTraceList = false;
	_enabled = true;
}

LogSink::~LogSink() {
}

/**
Set the internal level range values.
*/
void LogSink::setLevelRange(int mini, int maxi) {
	_minLevel = mini;
	_maxLevel = maxi;
}

/**
Add a new trace to the sink list.
*/
void LogSink::addTrace(std::string trace) {
	_traceSet.insert(trace);
}

/**
Remove a given trace to the sink list.
*/
void LogSink::removeTrace(std::string trace) {
	_traceSet.erase(_traceSet.find(trace));
}

void LogSink::setLogTraceList(bool enabled) {
  // Bouml preserved body begin 0002EF8B
	_logTraceList = enabled;
  // Bouml preserved body end 0002EF8B
}

/**
Process a given message on the LogSink object before output.
*/
void LogSink::process(int level, std::string trace, std::string msg) {
  // Bouml preserved body begin 00030B8B
	if(!_enabled)
		return;

	// check if we should process this level:
	if((_minLevel >= 0 && level < _minLevel) || (_maxLevel >=0 && level > _maxLevel))
		return;

	bool hasTrace = (_traceSet.find(trace)!=_traceSet.end());
	if((hasTrace && !_logTraceList) || (!hasTrace &&_logTraceList))
		return;

	// We may output the message here:
	output(level,trace,msg);
  // Bouml preserved body end 00030B8B
}


} // namespace scLog


#include "plug_common.h"

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

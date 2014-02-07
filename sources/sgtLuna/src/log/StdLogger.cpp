#include "lunaCommon.h"

#include "log/StdLogger.h"

namespace sgt {

/**
Output a given message on the LogSink object.
*/
void StdLogger::output(int level, std::string trace, std::string msg) {
	std::cout << msg;
}

} // namespace scLog

#include "lunaCommon.h"

#include "log/LogRecord.h"
#include "log/LogManager.h"

namespace sgt {

LogRecord::LogRecord() {
}

LogRecord::~LogRecord() {
	_os << std::endl;
	LogManager::instance().log(_level,_trace,_os.str());
}

/**
Returns the internal stream object used to temporary store the log record message.
*/
std::ostream& LogRecord::GetStream(int level, std::string filename, int line, std::string trace) {
	_level = level;
	_trace = trace;
	LogManager& lm = LogManager::instance();

	int flags = lm.getLevelFlags(level) | lm.getTraceFlags(trace);
	if(flags & LogManager::TIME_STAMP) {
		_os << lm.getTimeStamp() << " ";
	}

	_os << "[" <<lm.getLevelString(level) << "] ";

	if(flags & LogManager::FILE_NAME) {
		_os << "(in " << filename;
		if(flags & LogManager::LINE_NUMBER) {
			_os << " at line " << line;
		}
		_os << ") ";
	}

	if(flags & LogManager::THREAD_ID) {
		_os << "{Thread " << boost::this_thread::get_id() << "} ";
	}

	if(trace != "") {
		_os << "<" << trace << "> ";
	}

	_os << "\t" << std::string((level > LogManager::NOTICE ? level - LogManager::NOTICE : 0)*3, ' ');
	
	return _os;
}

} // namespace scLog

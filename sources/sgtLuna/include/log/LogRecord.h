#ifndef SC_LOGRECORD_H
#define SC_LOGRECORD_H

#include <lunaCommon.h>

namespace sgt {

class LogManager;

/**
The LogRecord represents an atomic piece of information to log.
This class is created internally on the stack and thus doesn't need any memory management.
*/
class SGTLUNA_EXPORT LogRecord {
  private:
    std::ostringstream _os;
    int _level;
	std::string _trace;

  public:
    LogRecord();
    ~LogRecord();

    /**
    Returns the internal stream object used to temporary store the log record message.
    */
	std::ostream& GetStream(int level, std::string filename, int line, std::string trace);
};

} // namespace mdLog

// Automatic global typedef
typedef sgt::LogRecord sgtLogRecord;

#endif

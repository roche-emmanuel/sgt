#ifndef SIMCORE_STDLOGGER_H
#define SIMCORE_STDLOGGER_H


#include <lunaCommon.h>

namespace sgt {

/** Standard output logger.
This logger will output all the received messages on the standard console stream std::cout.
*/
class SGTLUNA_EXPORT StdLogger : public LogSink {
  public:
	//Object_META_DEF(sgt,StdLogger);

    /** Constructor 
	\param name Optional name for this LogSink. If a name is provided, the LogSink can then be retrieved
	by name from the LogManager.*/
	StdLogger(const std::string& name = "") : LogSink(name) {}
    
	/**
    Output a given message on the LogSink object.
    */
	  virtual void output(int level, std::string trace, std::string msg);
};

} // namespace mdLog

// Automatic global typedef
typedef sgt::StdLogger sgtStdLogger;

#endif

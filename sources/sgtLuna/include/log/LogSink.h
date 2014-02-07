#ifndef SCLOG_LOGSINK_H
#define SCLOG_LOGSINK_H


#include <lunaCommon.h>

namespace sgt {

/**
Sink class to handle log records.
The LogSink class is an abstract class that can handle LogRecord objects with various settings.
*/
class SGTLUNA_EXPORT LogSink : public osg::Referenced {
  public:
	  /** Definition of a set of strings.*/
	  typedef std::set<std::string> StringSet;

  private:
    /**
    The minimal level value that will go though this sink
    */
    int _minLevel;

    /**
    The maximal level value that will go though this sink
    */
    int _maxLevel;

    /**
    List of traces that will be logged except if the _logTraceList value is set to false. In that case,
    This becomes the list of traces that will not be logged.
    */
    StringSet _traceSet;

    bool _logTraceList;
	
	bool _enabled;

  public:
	/** Default constructor.
	\param name Optional name for this LogSink.
	*/
	LogSink(const std::string& name = "");

    virtual ~LogSink();

	/** Enable od disable this LogSink object completely.*/
	void setEnabled(bool enabled) { _enabled = enabled; }

    /**
    Output a given message on the LogSink object.
    */
	virtual void output(int level, std::string trace, std::string msg) = 0;

    /**
    Set the internal level range values.
    */
    void setLevelRange(int mini, int maxi);

    /**
    Add a new trace to the sink list.
    */
	void addTrace(std::string trace);

    /**
    Remove a given trace to the sink list.
    */
	void removeTrace(std::string trace);

	/** Toggle the enable status for the listed trace strings. When the status is
	set to true, then only the listed traces are logged, when set to false then
	only the non listed traces are logged.*/
    void setLogTraceList(bool enabled);

    /**
    Process a given message on the LogSink object before output.
    */
	virtual void process(int level, std::string trace, std::string msg);
	
	inline void setName(const std::string& name) { _name = name; }

	inline std::string getName() { return _name; }	
	
protected:

	std::string _name;
};

} // namespace scLog

// Automatic global typedef
typedef sgt::LogSink sgtLogSink;

#endif

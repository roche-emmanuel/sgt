/*
 * LogManager.h
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */

#ifndef LOGMANAGER_H_
#define LOGMANAGER_H_

#include "lunaCommon.h"
#include "LogSink.h"

namespace sgt {

/**
Log management core class.
This class is used to manage the state and properties of the logging system used inside the library.
It is a "static only class" and thus do not need any memory management integrated.
*/
class SGTLUNA_EXPORT LogManager : public osg::Referenced {
public:
	class LogHandler : public osg::Referenced {
	public:
		virtual void handle(int level, std::string trace, std::string msg) = 0;
	};
	

	/** The available flags for each level or trace.
	The flags specify how the messages should be rendered and which content should be prepended.*/
	enum Flags {
	  FILE_NAME = 1,
	  LINE_NUMBER = 2,
	  THREAD_ID = 4,
	  TIME_STAMP = 8
	};

	/** Severity level values. Those values defines the available default levels.*/
	enum Severity {
	  FATAL,
	  ERROR,
	  WARNING,
	  NOTICE,
	  INFO,
	  DEBUG0,
	  DEBUG1,
	  DEBUG2,
	  DEBUG3,
	  DEBUG4,
	  DEBUG5
	};

	/** Definition of a vector of LogSink.*/
	typedef std::vector< osg::ref_ptr<LogSink> > SinkVector;
	/** Definition of a mapping of levels and flag values.*/
    typedef std::map<int,int> LevelFlagMap;
	/** Definition of a mapping of traces and flag values. */
	typedef std::map<std::string,int> TraceFlagMap;


private:
	/** Vector of sinks.*/
    SinkVector _sinks;
	/** level flag mapping.*/
    LevelFlagMap _levelFlags;
	/** Trace flag mapping.*/
    TraceFlagMap _traceFlags;

	/**
	The notification level to pass log records or not.
	*/
    int _notifyLevel;

	/**
	The current verbosity mode.
	*/
	bool _verbose;

	/** The default trace flags.*/
	int _defaultTraceFlags;

	/** The default level flags.*/
	int _defaultLevelFlags;
	
	sgtPtr<LogHandler> _handler;
	
public:
	LogManager() :
		_notifyLevel(100),
		_defaultTraceFlags(0),
		_defaultLevelFlags(0),
		_verbose(false) {}

	~LogManager(); // destructor should be private.
	
	/**
	Log a given piece of information to the internal sinks.
	*/
	void log(int level, std::string trace, std::string msg);
	
	void doLog(int level, std::string trace, std::string msg);

	/** assign the log handler if needed. */
	inline void setLogHandler(LogHandler* handler) {
		_handler = handler;
	};
	
	inline LogHandler* getLogHandler() {
		return _handler.get();
	};
	
	/**
	Returns the flags for a given level value.
	*/
	int getLevelFlags(int level);

	/**
	Set the flags for a given level.
	*/
	void setLevelFlags(int level, int flags);

	/** Add some flags to a given level.*/
	inline void addLevelFlags(int level, int flags) { setLevelFlags(level, flags | getLevelFlags(level)); }

	/** Remove some flags from a given level.*/
	inline void removeLevelFlags(int level, int flags) { setLevelFlags(level, getLevelFlags(level) & ~flags); }

	/**
	Returns the flags for a given trace value.
	*/
	int getTraceFlags(std::string trace);

	/**
	Set the flags for a given trace.
	*/
	void setTraceFlags(std::string trace, int flags);

	/**
	Add a new LogSink to the internal list.
	*/
	void addSink(LogSink * sink);

	/** Remove a LogSnk by pointer. */
	bool removeSink(LogSink * sink);

	/** Remove a LogSnk by name. */
	bool removeSink(const std::string& name);

	/** Remove all the sinks registered in the logmanager. */
	bool removeAllSinks();

	/** Retrieve a LogSink by name. */
	LogSink* getSink(const std::string& name);

	/**
	Return current notify level.
	*/
	int getNotifyLevel();

	/**
	Set current notify level.
	*/
	void setNotifyLevel(int level);

	/**
	Returns current verbosity mode.
	*/
	bool getVerbose();

	/**
	Set current verbosity mode.
	*/
	void setVerbose(bool verbose);

	/** Convert a level value to a string.*/
	std::string getLevelString(int level);

	/** Retrieve the current time stamp as a string.*/
	std::string getTimeStamp();

	/** Assign the default trace flags.*/
	void setDefaultTraceFlags(int val);

	/** Assign the default level flags.*/
	void setDefaultLevelFlags(int val);

	/** Retrieve the current singleton. */
	static LogManager& instance();
	
	/** Destroy the current singleton. */
	static void destroy();
};

} /* namespace scLog */

// Automatic global typedef
typedef sgt::LogManager sgtLogManager;

#endif /* LOGMANAGER_H_ */

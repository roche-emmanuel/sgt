/*
 * FileLogger.h
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */

#ifndef FILELOGGER_H_
#define FILELOGGER_H_

#include <lunaCommon.h>

namespace sgt {

/**
 * Send log messages into a file.
 * This class is used to send the log messages into a file.
 */
class SGTLUNA_EXPORT FileLogger : public LogSink {
public:
	//Object_META_DEF(sgt,FileLogger);

	/** Default constructor. */
	FileLogger() {};

	/**
	 * Create a new FileLogger object and open the corresponding file.
	 * @param filename The file to open
	 * @param append If true, append the log messages to the existing file content.
	 * @param name Optional name for this LogSink.
	 */
	FileLogger(const std::string& filename, bool append = false, const std::string& name = "");

	virtual ~FileLogger();

    /**
    Output a given message on the LogSink object.
    */
	virtual void output(int level, std::string trace, std::string msg);

	/** Initialization function.
	Called in the non default constructor. */
	bool init(const std::string& filename, bool append = false);

	/** Retrieve the name of the file used. */
	inline std::string getFilename() { return _filename ; }

	/** Retrieving the appending status. */
	inline bool getAppending() { return _append; }

private:
	/** File output stream object.*/
    std::ofstream _stream;

	/** The name of the file used.*/
	std::string _filename;

	/** The current appending status. */
	bool _append;
};

} /* namespace scLog */
// Automatic global typedef
typedef sgt::FileLogger sgtFileLogger;

#endif /* FILELOGGER_H_ */

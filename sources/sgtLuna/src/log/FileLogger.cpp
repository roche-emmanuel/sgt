/*
 * FileLogger.cpp
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */
#include "lunaCommon.h"

#include "log/FileLogger.h"

namespace sgt {

void FileLogger::output(int level, std::string trace, std::string msg) {
	_stream << msg;
	_stream.flush();
}

FileLogger::FileLogger(const std::string& filename, bool append, const std::string& name) : LogSink(name) {
	init(filename,append);	
}

FileLogger::~FileLogger() {
	_stream.close();
}

bool FileLogger::init(const std::string& filename, bool append) {
	_filename = filename;
	_append = append;
	if(_stream.is_open())
		_stream.close(); // close previous stream if any.
	_stream.open(filename.c_str(), append ? (std::ofstream::out | std::ofstream::app) : std::ofstream::out);
	return true;
}

} /* namespace scLog */

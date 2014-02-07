/*
 * Exception.h
 *
 *  Created on: 29 févr. 2012
 *      Author: kenshin
 */

#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <lunaCommon.h>

namespace sgt {

/** Internal exception implementation.
This base exception class is used to throw exception messages.*/
class SGTLUNA_EXPORT Exception : public std::exception {
public:
	/** Default constructor.*/
	Exception() {}; // 
	/** Copy constructor.*/
	Exception(const Exception& rhs) : std::exception(rhs), _message(rhs._message) {};

	/** Construction from a message string.*/
	Exception(const char* msg) : std::exception(), _message(msg) {};
	/** Construction from a message string.*/
	Exception(const std::string& msg) : std::exception(), _message(msg) {};

	/** Assignment operator.*/
	Exception& operator= (const Exception& rhs) {
		std::exception::operator=(rhs);
		_message = rhs._message;
		return *this;
	};

	virtual ~Exception() throw() {};

	virtual const char* what() const throw() {
		return _message.c_str();
	}

protected:
	std::string _message;
};

} /* namespace scBase */

typedef sgt::Exception sgtException;

#endif /* EXCEPTION_H_ */

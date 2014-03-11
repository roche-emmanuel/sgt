/*
 * sgtApp.h
 *
 *  Created on: 15 févr. 2012
 *      Author: kenshin
 */

#ifndef SGTAPP_H_
#define SGTAPP_H_

#include <plug_common.h>

// The main application class
class sgtApp : public wxApp {
public:
	bool OnInit() { 
		std::cout << "In OnInit()." << std::endl;
		return true; 
	};

	int OnExit() {
		std::cout << "In OnExit()." << std::endl;
		return 0; 
	}
};

DECLARE_APP(sgtApp);

#endif /* SGTAPP_H_ */

#ifndef __TEMPERATURE
#define __TEMPERATURE


#include <string>
#include <iostream>
#include <stdlib.h>
#include "internClass.h"

using namespace std;


class temperature {
	int temp;
	string name;

	public:
	void getTemperature();

	void printTemperature();


};



#endif

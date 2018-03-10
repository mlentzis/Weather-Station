#ifndef __WIND
#define __WIND

#include <string>
#include <iostream>
#include <stdlib.h>
#include "internClass.h"

using namespace std;


class wind {
	int speed;
	string direction;

	public:
		void getWind();

		void printWind();
};



#endif

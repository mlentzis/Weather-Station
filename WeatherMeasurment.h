#include "Wind.h"
#include "Temperature.h"

#include <string>
#include <iostream>
#include <stdlib.h>
#include "internClass.h"


class weatherMeasurement {
	temperature temperature;
	wind wind;

	public:
		void getWeatherMeasurement();

		void printWeatherMeasurement();

	//	void copyWeatherMeasurement();

};


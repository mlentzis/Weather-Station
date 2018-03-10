#include "WeatherMeasurment.h"
#include "internClass.h"
#include <string>
#include <iostream>



void weatherMeasurement::getWeatherMeasurement(){
	temperature.getTemperature();
	wind.getWind();
}

void weatherMeasurement::printWeatherMeasurement(){
	temperature.printTemperature();
	wind.printWind();
}


/*
void copyWeatherMeasurement(weatherMeasurement_t from, weatherMeasurement_t &to) {
	to.temperature.temperature = from.temperature.temperature;
	to.wind.speed = from.wind.speed;
	to.wind.direction = from.wind.direction;
}

*/
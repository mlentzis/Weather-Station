#include "Temperature.h"
#include "key.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include "internClass.h"

using namespace std;

int GetTemperature(){


	bool aFail = true;
	int temp;
	
	cout << stringServer::getInst()->getString(7) << endl;
	cin >> temp;
	system("CLS");

	//checks to see if number is between



	do{


		aFail = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (aFail == true) {
			system("CLS");
			if (temp < -20 || temp > 120){
				system("CLS");
				cout << stringServer::getInst()->getString(25) << endl;
				cin >> temp;


			}
		}
	} while (aFail == true);



	return temp;

}


void temperature::getTemperature() {
	temp = GetTemperature();

}


void temperature::printTemperature() {

	
	cout << temp << stringServer::getInst()->getString(14) << endl;
}

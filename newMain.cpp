#include <string>
#include <iostream>
#include "weatherStation.h"
#include "WeatherMeasurment.h"
#include "internClass.h"
#include <fstream>
#include <sstream>

#include <iterator>
#include <list>
#include <vector>


using namespace std;

int main(){

	int choice;
	double total = 0;
	int count = 0;
	int size = 0;
	int account1 = 10;
	int currentsize;

	
#define create 1
#define select2 2
#define print2 3
#define quit 4



	stringServer::getInst()->loadLanguage();

	system("CLS");

	cout << stringServer::getInst()->getString(30) << endl;
	cout << stringServer::getInst()->getString(31) << endl;
	cout << stringServer::getInst()->getString(32) << endl;
	cout << stringServer::getInst()->getString(33) << endl;
	cout << stringServer::getInst()->getString(34) << endl;

	cin >> choice;

	system("CLS");

	list<weatherStation> station;
	weatherStation *aStation;


	weatherStation main2;

	aStation = new weatherStation();

	while (choice != quit){

		switch (choice){
			 
		case create:


			main2.mWeatherStation();
			
			station.push_front(*aStation);

			aStation.manage();

			
			
			//count++;

			/*
			for (int i = size - 1; i > 0; i--){
				all[i] = all[i - 1];

			}
			all[0]= station; 
			*/

			break;

		case select2:

			int i = 0;
			for (list<weatherStation>::iterator it = station.begin(); it != station.end(); i++, it++)
			{
				cout << i << " " << aStation(it.data()).weatherStation << endl;
			}



			break;

		case print2:

			for (list<weatherStation>::iterator it = station.begin; it != station.end(); i++, it++)
			{
				cout << aStation(it.data()).weatherStation << endl;
			}


			break;

		case quit:

			system(0);

			break;

		default:

			bool cFail;

			do{

				cFail = cin.fail();
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');


				//if selected something other that 1-4 in main menu

				while (true){


					if (choice < 1 || choice > 4){
						cout << stringServer::getInst()->getString(29) << endl;
						cin >> choice;
					}
					else{

						break;

					}
				}


			} while (cFail == true);


		} // switch


	} // while statement

	return 0;
}// main

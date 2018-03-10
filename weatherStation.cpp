// Michael Lentzis
#include "WeatherMeasurment.h"
#include "key.h"
#include "internClass.h"
#include "weatherStation.h"


#include <iostream>
#include <string>
#include <fstream>


using namespace std;


/*
method to check if printer has values or not (String)@@@@@@@@
void printerError(string &compass){


//if values are blank do this
if (compass == ""){
cout << "There is nothing to print!" << endl << "Please select option 1 to input values in the weather station" << endl << endl;

}
else {

}

}
*/

//print name (string)@@@@@@@@
string weatherStation::printName(){

	string name;

	cout << stringServer::getInst()->getString(0) << endl;

	cin >> name;

	return name;


}


/*

Quit method@@@@@@@@@@@
void weatherStation:: theQuit(){

int userResponse;
//when selected 4, quit
if(userResponse == 4){

exit(0);
}
}
*/


//Default method@@@@@@@@@
void weatherStation::theDefault(){

	bool cFail;

	do{

		cFail = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		/*
		if selected something other that 1-4 in main menu

		while (true){


		if (userResponse < 1 || userResponse > 4){
		cout << stringServer::getInst()->getString(29) << endl;
		cin >> userResponse;
		}
		else{

		break;

		}
		}

		*/
	} while (cFail == true);

}



/*

tests one array to check it values are correct@@@@@@
void testTempArray(int *theArray, int &size, int &count){

int k = count > size ? size : count;
for (int i = 0; i < k; i++)
{
cout << theArray[i] << " degrees Fahrenheit" << endl;

}

}
*/

void weatherStation::getArray(){

	int size;

	bool eFail;

	do{
		eFail = false;
		cout << stringServer::getInst()->getString(1) << endl;
		cin >> size;

		eFail = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		while (true){

			if (size <= 0){

				cout << endl << stringServer::getInst()->getString(28) << endl;
				cin >> size;
			}
			else
			{

				break;
			}


		}

	} while (eFail == true);


}




void weatherStation::getUserResponse(){

	cout << stringServer::getInst()->getString(2) << endl << stringServer::getInst()->getString(3) << endl << stringServer::getInst()->getString(4)
		<< endl << stringServer::getInst()->getString(5) << endl << stringServer::getInst()->getString(6) << endl;

}





weatherStation::weatherStation()
{
	cout << stringServer::getInst()->getString(0) << endl;
	cin >> name;

	system("CLS");

	cout << stringServer::getInst()->getString(1) << endl;
	cin >> size;
	if (size < 0)
	{
		cout << stringServer::getInst()->getString(28) << endl;
	}

	weatherMeasurement now;
	weatherMeasurement * history = new weatherMeasurement[size];

	

}

















//THE MAIN@@@@@@@

void weatherStation::mWeatherStation()
{

	//variables
	string compass = "";
	int userResponse = 0;
	int count = 0;
	int k;
	int select = 0;
	string enter;


	//main menu switch constants
#define weather 1
#define print 2
#define back 4

	weatherMeasurement now;
	weatherMeasurement * history = new weatherMeasurement[size];

	system("CLS");

	int weath = weather;


	while (weath != back){


		//cout << "Welcome to the weather station. Would you like to: \n1- Update the weather station  \n2- Print out the weather information \n3- Print weather history \n4- Quit" << endl;

		system("CLS");

		getUserResponse();
		cin >> userResponse;
		//main menu for program

		switch (userResponse){
		case weather:

			system("CLS");


			now.getWeatherMeasurement();
			count++;

			for (int i = size - 1; i > 0; i--) {
				history[i] = history[i - 1];
			}
			//			history[0] = now;

			system("CLS");
			history[0] = now;

			break;

		case print:

			system("CLS");

			//error check name and compile

			cout << stringServer::getInst()->getString(12) << " " << name << " " << stringServer::getInst()->getString(13) << endl;

			history[0].printWeatherMeasurement();

			cout << endl;
			cout << "Press any letter to continue" << endl;
			cin >> enter;

			if (enter == "") {

				break;
			}
			else{

				break;
			}


			break;

		case 3:


			cout << stringServer::getInst()->getString(24) << endl << endl;


			k = count > size ? size : count;
			for (int i = 0; i < k; i++){
				history[i].printWeatherMeasurement();
				cout << "" << endl;
			}

			cout << endl;
			cout << "Press any letter to continue" << endl;
			cin >> enter;

			if (enter == ""){

				break;
			}
			else{

				break;
			}



			break;


		case back:

			//theQuit();

			return;


			break;

		default:

			bool cFail;

			do{

				cFail = cin.fail();
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');


				//if selected something other that 1-4 in main menu

				while (true){


					if (userResponse < 1 || userResponse > 4){
						cout << stringServer::getInst()->getString(29) << endl;
						cin >> userResponse;
					}
					else{

						break;

					}
				}


			} while (cFail == true);



		} // end switch
		cout << endl;

	} // end while

	//return;

} //end main



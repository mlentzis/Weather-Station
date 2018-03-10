#include "Wind.h"

#include <string>
#include <iostream>
#include <stdlib.h>
#include "internClass.h"
#include "key.h"
using namespace std;

int getSpeed()
{

	system("CLS");

	bool bFail = true;
	int wind;



	do{
		bFail = false;
		cout << stringServer::getInst()->getString(8) << endl;
		cin >> wind;


		bFail = cin.fail();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if (bFail == true) {
			system("CLS");
			if (wind < 0){
				cout << stringServer::getInst()->getString(26) << endl;
				cin >> wind;
			}
		}
	} while (bFail == true);
	return wind;
}

// copyt the function to read direcction from inDirection.h

string getDirection(){

	bool dir;
	//compass input
	string compass;

	do
	{
		dir = true;
		system("CLS");
		cout << stringServer::getInst()->getString(9) << endl;
		cin >> compass;

		

		if (compass == stringServer::getInst()->getString(16) || compass == stringServer::getInst()->getString(17) || compass == stringServer::getInst()->getString(18) || compass == stringServer::getInst()->getString(19) ||
			compass == stringServer::getInst()->getString(20) || compass == stringServer::getInst()->getString(21) || compass == stringServer::getInst()->getString(22) || compass == stringServer::getInst()->getString(23)){
			

			break;
			//dir = false;

		}
		else{
			//if not selected one of the options
			while (dir){
				system("CLS");
				cout << stringServer::getInst()->getString(27) << endl << stringServer::getInst()->getString(10) << endl << stringServer::getInst()->getString(11) << endl;
				cin >> compass;
				if (compass == stringServer::getInst()->getString(16) || compass == stringServer::getInst()->getString(17) || compass == stringServer::getInst()->getString(18) || compass == stringServer::getInst()->getString(19) ||
					compass == stringServer::getInst()->getString(20) || compass == stringServer::getInst()->getString(21) || compass == stringServer::getInst()->getString(22) || compass == stringServer::getInst()->getString(23))

				
				{


					break;

				}

			}


		}

	} while (dir = false);

	return compass;


}
// fix it so that it just returns a wind direction without any input args



void wind::getWind() {
	speed = getSpeed();
	direction = getDirection();
}

void wind::printWind() {
	cout << speed << stringServer::getInst()->getString(15) << direction << endl;
	}


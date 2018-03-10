#include "internClass.h"

#include "key.h"
#include "fstream"
#include <iostream>
#include <sstream>
using namespace std;

stringServer* stringServer::inst = 0;

void stringServer::loadLanguage()
{
	ifstream thelang;
	int lang = 0;
	int key = 0;
	string input;
	string input2;
	 

		cout << "1 - English " << endl << "2 - iglatinpay" << endl << "3 - Exit/ uitqay  " << endl;
		cin >> lang;

		while (cin.fail()) {
			cout << "Invalid" << endl;
			cin >> lang;

		}
		while (lang == cin.fail())
		{
			cout << "invalid" << endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> lang;
		}


		if (lang == 3)
		{
			system(0);
		}

	   if (lang == 1)
		{
			ifstream theEnglish("printEnglish.txt");
			if (theEnglish.is_open())
			{
				while (theEnglish.good())
				{
					getline(theEnglish, input);
					text[key] = input;
					key++;
				}
			}
		}

		 if (lang == 2)
		{
			ifstream thePig("printPiglatin.txt");

			if (thePig.is_open())
			{
				while (thePig.good()){

					getline(thePig, input2);
					text[key] = input2;
					key++;
				}
			}
		}


		//	thelang.close();
	
}

stringServer *stringServer::getInst() {
	if (inst == 0) inst = new stringServer();
	return inst;
}
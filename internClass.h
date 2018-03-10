#pragma once
#include<string>

using namespace std;

class stringServer {
	string text[100];
	static stringServer *inst;

public:
	void loadLanguage();
	string getString(int key) {
		return text[key];
	};
	static stringServer *getInst();

};

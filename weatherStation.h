#include <string>

using namespace std;

class weatherStation{

	string name;
	string compass = "";
	int userResponse;
	int count = 0;
	int size = 0;
	int k;
	int select = 0;
	

public:

	string printName();
	void theQuit();
	void theDefault();
	void getArray();
	void getUserResponse();
	void mWeatherStation();
	weatherStation();

};
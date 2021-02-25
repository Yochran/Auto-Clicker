#include "Utils.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Utilities {
public:
	void sendMessage(string message) {
		cout << message << endl;
	}

	string input(string message) {
		cin >> message;

		return message;
	}
};
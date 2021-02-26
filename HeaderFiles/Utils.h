#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Utilities {
public:
	void sendMessage(string MESSAGE) {
		cout << MESSAGE << endl;
	}

	string input(string MESSAGE) {
		cin >> MESSAGE;
		return MESSAGE;
	}
};

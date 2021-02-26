#pragma once

#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>

#include <ctime>

using namespace std;

class ClickUtilities {
public:
	void autoClicker(int C_COOLDOWN) {
		bool CLICK_ACTIVATION = false;

		while (true) {
			if (GetAsyncKeyState('Q')) {
				CLICK_ACTIVATION = true;
			}
			else if (GetAsyncKeyState('Z')) {
				CLICK_ACTIVATION = false;
			}

			if (CLICK_ACTIVATION == true) {
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

				Sleep(C_COOLDOWN);
			}
		}
	}
};

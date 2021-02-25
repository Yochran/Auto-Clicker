#include "ClickUtil.h"

#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

class ClickUtilities {
public:
	void autoClicker(int cd) {
		if (cd < 10) {
			cd = cd * -5;
		}

		bool click = false;

		while (true) {
			if (GetAsyncKeyState('Q')) {
				click = true;
			}
			else if (GetAsyncKeyState('Z')) {
				click = false;
			}

			if (click == true) {
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				Sleep(cd);
			}
		}
	}
};
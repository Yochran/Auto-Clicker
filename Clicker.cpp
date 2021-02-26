#include "Utils.h"
#include "ClickUtil.h"

#include <iostream>
#include <Windows.h>
#include <string>
#include <sstream>

using namespace std;

Utilities UTILS;
ClickUtilities CLICK_UTILS;

void main()
{
    system("title Auto Clicker v1.0");
    system("color 0f");

    UTILS.sendMessage("Welcome to the autoclicker.");
    UTILS.sendMessage("Once click delay is inputted, press Q to toggle on, Z to toggle off.");

    // Input Value:
    UTILS.sendMessage("\nEnter Click Delay (MS):");

    int C_CD;
    cin >> C_CD;

    CLICK_UTILS.autoClicker(C_CD);
}

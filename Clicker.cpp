#include "Utils.cpp"
#include "ClickUtil.cpp"

#include <iostream>
#include <Windows.h>
#include <string>
#include <sstream>

using namespace std;

void main()
{
    Utilities utils;
    ClickUtilities cUtils;

    system("title Auto Clicker v1.0");
    system("color 0f");

    utils.sendMessage("Welcome to the autoclicker.");
    utils.sendMessage("Once click delay is inputted, press Q to toggle on, Z to toggle off.");

    // Input Value:
    utils.sendMessage("Enter Click Delay (MS):");

    int cd;
    cin >> cd;

    cUtils.autoClicker(cd);
}

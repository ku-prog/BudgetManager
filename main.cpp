#include <iostream>
#include <ctime>
#include <sstream>

#include "Markup.h"

using namespace std;

int getInteger()
{
    string inputString = "";
    int inputInteger = 0;

    while (true)
    {
        getline(cin, inputString);

        stringstream myStream(inputString);
        if (myStream >> inputInteger)
            break;

        cout << "Not a digit. Please insert proper integer value again." << endl;
        system("pause");
    }
    return inputInteger;
}



int main()
{
    int choiceFromMainMenu;

    while (true)
    {
        system("cls");

        cout << "----MAIN MENU----" << endl;
        cout << "-----------------" << endl;
        cout << "1. Login." << endl;
        cout << "2. Register." << endl;
        cout << "3. Exit." << endl;
        cout << "-----------------" << endl;

        choiceFromMainMenu = getInteger();

        switch (choiceFromMainMenu)
        {
        case 1:
            cout << "Proceeding to logging in. Current progress 0%." << endl;
            system("pause");
            break;

        case 2:
            cout << "Proceeding to register form. Current progress 0%." << endl;
            system("pause");
            break;

        case 3:
            cout << "System is shutting down. Current progress 0%." << endl;
            system("pause");
            exit(0);
            break;

        default:
            cout << "Please insert proper character." << endl;
            system("pause");
        }
    }

    return 0;
}

#include <iostream>
#include <ctime>
#include <sstream>

#include "Markup.h"
#include "Type.h"

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

string getString()
{
    string input = "";
    getline(cin, input);
    return input;
}

int showMainMenu()
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
            return choiceFromMainMenu;
            break;

        case 2:
            cout << "Proceeding to register form. Current progress 0%." << endl;
            system("pause");
            return choiceFromMainMenu;
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
}

int userLogin()
{
    string login, password;

    login = getString();


}



int main()
{
    int initialChoice = showMainMenu();
    enum Type type = initialChoice;

    if (type == LOGIN)
    {
        cout << "Logging in..." << endl;
        Login();
    }

    return 0;
}

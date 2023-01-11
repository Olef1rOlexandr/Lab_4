#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ukr");
    
    int friengsAge[3];
    string friendsNames[] = { "Sasha", "Kolya", "Maks" };
    cout << "Enter ages of your friends:";
    for (int i = 0; i < 3; i++)
    {
        cout << "\n" << friendsNames[i] << "`s age is - ";
        cin >> friengsAge[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (friengsAge[i] >= 18)
            cout << "\n" << friendsNames[i] << " is grown`up!!!";

    }
}
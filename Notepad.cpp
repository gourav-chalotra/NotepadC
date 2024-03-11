#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
// File .Edit. View
vector<string> Menu = {"Save"};
void DisplayUI()
{
    for (int i = 0; i < Menu.size(); i++)
    {
        cout << Menu[i] << "\t";
    }
    cout << "\n\n\n"
         << endl;
}
void DisplayUI(int indexMenu)
{
    
}
void saveFunction()
{
    list<string> menu;
    cout << "DO YOU WANT TO SAVE IT." << endl;
}
int main()
{
    list<char> head;
    char inputString;
    bool check = false;
    while (true)
    {
        if (check)
        {
        }
        else
        {

            DisplayUI();
        }
        for (auto i : head)
        {
            cout << i;
        }
        char input = getch();
        if (input == '\b')
        {
            head.pop_back();
        }
        else if (input == 3)
        {
            break;
        }
        else if (input >= 32 && input <= 125)
        {
            head.push_back(input);
        }
        else if (input == 9)
        {
            // tab
            DisplayUI(0);
        }
        else if (input == 13)
        {
            // enter
            head.push_back('\n');
        }
        system("cls");
    }
    // saveFunction();
    return 0;
}
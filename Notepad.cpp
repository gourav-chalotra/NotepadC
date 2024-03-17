#include <bits/stdc++.h>
#include <conio.h>
#include <fstream>

using namespace std;
// File .Edit. View
list<char> head;
vector<string> Menu = {"Save", "Exit"};

void displayingDataInputOnScreen()
{
    cout << endl;
    for (auto i : head)
    {
        cout << i;
    }
}
void DisplayUI()
{
    for (int i = 0; i < Menu.size(); i++)
    {
        cout << Menu[i] << "\t";
    }
    cout << "\n\n\n"
         << endl;
}
void clearnHead()
{
    head.clear();
}
// Used to print the desh board of pennal
int DisplayUI(int indexMenu)
{
    while (true)
    {
        for (int i = 0; i < Menu.size(); i++)
        {
            if (indexMenu == i)
                cout << Menu[i] + "*"
                     << "\t";
            else
                cout << Menu[i] << "\t";
        }
        cout << "\n\n\n"
             << endl;
        displayingDataInputOnScreen();
        char input;
        input = getch();
        if (input == 9)
        {
            indexMenu++;
            indexMenu = indexMenu % Menu.size();
        }
        else if (input == 13)
        {
            break;
        }
        system("cls");
    }
    return indexMenu;
    // Index value par ham check kera ga... konsa user na option click kiya hai
}

void saveFunction()
{
    list<string> menu;
    cout << "DO YOU WANT TO SAVE IT." << endl;
}
int main()
{
    // use to store input value in a list of char's
    char inputString;
    bool check = false;
    while (true)
    {
        DisplayUI();
        displayingDataInputOnScreen();
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
            system("cls");
            int operations = DisplayUI(0);
            cout << "operations: " << operations << endl;
            // For saving file
            if (operations == 0)
            {
                string filename;
                // validing file name is correct or not
                while (true)
                {
                    cout << "Enter the file name with extenction (filename.txt): ";
                    cin >> filename;
                    bool Error = false;
                    for (auto it : filename)
                    {
                        if (it == ' ')
                        {
                            Error = true;
                            break;
                        }
                    }
                    if (Error)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                    system("cls");
                }
                string data;
                fstream MyFile(filename);
                for (auto k : head)
                {
                    data += k;
                }
                MyFile << data;
                MyFile.clear();
                clearnHead();
            }
            else
            {
                exit(0);
            }
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
/*Q2. Write a menu driven program for Date in a CPP language using structure and also using class. 
Date is having data members day, month, year. Implement the following functions. 
void initDate(); 
void printDateOnConsole(); 
void acceptDateFromConsole(); 
bool isLeapYear();*/


#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void printDateOnConsole()
    {
        cout << "Date = " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter day: ";
        cin >> day;

        cout << "Enter month: ";
        cin >> month;

        cout << "Enter year: ";
        cin >> year;
    }

    bool isLeapYear()
    {
        if(year % 400 == 0)
            return true;

        if(year % 100 == 0)
            return false;

        if(year % 4 == 0)
            return true;

        return false;
    }
};

int main()
{
    Date date;
    int choice;

    while(true)
    {
        cout << "\n1. Initialize Date" << endl;
        cout << "2. Accept Date" << endl;
        cout << "3. Print Date" << endl;
        cout << "4. Check Leap Year" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            date.initDate();
            cout << "Date initialized." << endl;
        }
        else if(choice == 2)
        {
            date.acceptDateFromConsole();
        }
        else if(choice == 3)
        {
            date.printDateOnConsole();
        }
        else if(choice == 4)
        {
            if(date.isLeapYear())
                cout << "Leap Year" << endl;
            else
                cout << "Not a Leap Year" << endl;
        }
        else if(choice == 0)
        {
            cout << "Program ended." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
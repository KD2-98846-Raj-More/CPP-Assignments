/*Q2. Write a menu driven program for Date in a CPP language using structure and also using class. 
Date is having data members day, month, year. Implement the following functions. 
void initDate(); 
void printDateOnConsole(); 
void acceptDateFromConsole(); 
bool isLeapYear();*/


#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:

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
        else if(year % 100 == 0)
            return false;
        else if(year % 4 == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    Date date;
    int choice;

    do
    {
        cout << "\n1. Initialize Date" << endl;
        cout << "2. Accept Date" << endl;
        cout << "3. Print Date" << endl;
        cout << "4. Check Leap Year" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                date.initDate();
                cout << "Date initialized." << endl;
                break;

            case 2:
                date.acceptDateFromConsole();
                break;

            case 3:
                date.printDateOnConsole();
                break;

            case 4:
                if(date.isLeapYear())
                    cout << "Leap Year" << endl;
                else
                    cout << "Not a Leap Year" << endl;
                break;

            case 0:
                cout << "Program ended." << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while(choice != 0);

    return 0;
}
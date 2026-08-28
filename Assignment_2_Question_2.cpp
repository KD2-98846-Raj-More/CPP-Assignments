/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
Mostly they do, but sometimes a car goes by without paying. 
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
collected. Model this tollbooth with a class called tollbooth. 
The two data items are a type unsigned int to hold the total number of cars, and a type double to 
hold the total amount of money collected. 
A constructor initializes all data members to 0. A member function called payingCar() increments 
the car total and adds 0.50 to the cash total. An other function, called nopayCar() 
increments the car total but adds nothing to the cash total. Finally, a member function called 
printOnConsole() displays the two totals and number of paying as well as non paying cars total.*/  

#include<iostream>
using namespace std;

class tollbooth
{
    unsigned int totalCars;
    double totalCash;

public:

    
    tollbooth()
    {
        totalCars = 0;
        totalCash = 0;
    }

    
    void payingCar()
    {
        totalCars++;
        totalCash = totalCash + 0.50;
    }

    
    void nopayCar()
    {
        totalCars++;
    }

    
    void printOnConsole()
    {
        int payingCars;
        int nonPayingCars;

        payingCars = totalCash / 0.50;
        nonPayingCars = totalCars - payingCars;

        cout << "Total Cars = " << totalCars << endl;
        cout << "Total Cash = " << totalCash << endl;
        cout << "Paying Cars = " << payingCars << endl;
        cout << "Non-Paying Cars = " << nonPayingCars << endl;
    }
};

int main()
{
    tollbooth t;
    int choice;

    do
    {
        cout << "\n1. Paying Car" << endl;
        cout << "2. Non-Paying Car" << endl;
        cout << "3. Display Total" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                t.payingCar();
                break;

            case 2:
                t.nopayCar();
                break;

            case 3:
                t.printOnConsole();
                break;

            case 4:
                cout << "Program ended." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}
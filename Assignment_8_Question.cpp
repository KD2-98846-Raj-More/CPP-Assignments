/*Q1. Write a class Distance to hold feet and inches. Overload operator + as member function. Also, 
overload ++ operator (to increment inches) as member function and -- operator as friend function. 
Overload << and >> operators to accept and display distance.*/



#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0)
    {
    }

    Distance(int feet, int inches) : feet(feet), inches(inches)
    {
    }

    Distance operator+(Distance d)
    {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if(temp.inches >= 12)
        {
            temp.feet = temp.feet + temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        return temp;
    }

    Distance& operator++()
    {
        inches++;

        if(inches >= 12)
        {
            feet++;
            inches = inches - 12;
        }

        return *this;
    }

    friend Distance& operator--(Distance &d);

    friend ostream& operator<<(ostream &out, Distance &d);

    friend istream& operator>>(istream &in, Distance &d);
};

Distance& operator--(Distance &d)
{
    if(d.inches > 0)
    {
        d.inches--;
    }
    else
    {
        if(d.feet > 0)
        {
            d.feet--;
            d.inches = 11;
        }
    }

    return d;
}

ostream& operator<<(ostream &out, Distance &d)
{
    out << d.feet << " feet " << d.inches << " inches";
    return out;
}

istream& operator>>(istream &in, Distance &d)
{
    cout << "Enter feet: ";
    in >> d.feet;

    cout << "Enter inches: ";
    in >> d.inches;

    return in;
}

int main()
{
    Distance d1;
    Distance d2;
    Distance d3;

    cout << "Enter first distance:" << endl;
    cin >> d1;

    cout << "Enter second distance:" << endl;
    cin >> d2;

    d3 = d1 + d2;

    cout << "\nFirst Distance  : " << d1 << endl;
    cout << "Second Distance : " << d2 << endl;
    cout << "Addition        : " << d3 << endl;

    ++d1;

    cout << "\nAfter ++d1      : " << d1 << endl;

    --d2;

    cout << "After --d2      : " << d2 << endl;

    return 0;
}
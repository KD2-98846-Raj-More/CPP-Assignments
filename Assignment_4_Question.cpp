
/*Q1. Write a class for Time and provide the functionality 
Time() 
Time(int h,int m,int s) 
getHour() 
getMinute() 
getSeconds() 
printTime() 
setHour() 
setMinute() 
setSeconds() 
In main create array of objects of Time. 
Allocate the memory for the array and the object dynamically. 
Write a menu driven code which provides below functionality 
1. Add Time 
2. Display All Time 
3. Display only hrs of all time objects*/



#include<iostream>
using namespace std;

class Time
{
private:
    int hrs;
    int mins;
    int secs;

public:
    Time() : hrs(0), mins(0), secs(0)
    {
    }

    Time(int h, int m, int s) : hrs(h), mins(m), secs(s)
    {
    }

    void setHour(int h)
    {
        this->hrs = h;
    }

    void setMinute(int m)
    {
        this->mins = m;
    }

    void setSeconds(int s)
    {
        this->secs = s;
    }

    int getHour()
    {
        return this->hrs;
    }

    int getMinute()
    {
        return this->mins;
    }

    int getSeconds()
    {
        return this->secs;
    }

    void printTime()
    {
        cout << this->hrs << ":" << this->mins << ":" << this->secs << endl;
    }
};

int main()
{
    int n;
    int choice;
    int count = 0;

    cout << "Enter number of Time objects: ";
    cin >> n;

    Time *t = new Time[n];

    do
    {
        cout << "\n1. Add Time" << endl;
        cout << "2. Display All Time" << endl;
        cout << "3. Display only hrs of all time objects" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                if(count < n)
                {
                    int h, m, s;

                    cout << "Enter hour: ";
                    cin >> h;

                    cout << "Enter minute: ";
                    cin >> m;

                    cout << "Enter seconds: ";
                    cin >> s;

                    t[count].setHour(h);
                    t[count].setMinute(m);
                    t[count].setSeconds(s);

                    count++;

                    cout << "Time added successfully." << endl;
                }
                else
                {
                    cout << "Array is full." << endl;
                }

                break;
            }

            case 2:
            {
                if(count == 0)
                {
                    cout << "No time objects available." << endl;
                }
                else
                {
                    int i;

                    cout << "All Time Objects:" << endl;

                    for(i = 0; i < count; i++)
                    {
                        t[i].printTime();
                    }
                }

                break;
            }

            case 3:
            {
                if(count == 0)
                {
                    cout << "No time objects available." << endl;
                }
                else
                {
                    int i;

                    cout << "Hours of all Time Objects:" << endl;

                    for(i = 0; i < count; i++)
                    {
                        cout << t[i].getHour() << endl;
                    }
                }

                break;
            }

            case 4:
            {
                cout << "Program ended." << endl;
                break;
            }

            default:
            {
                cout << "Invalid choice." << endl;
            }
        }

    } while(choice != 4);

    delete[] t;

    return 0;
}
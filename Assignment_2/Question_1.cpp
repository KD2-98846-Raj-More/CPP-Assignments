/*Q1. Write a menu driven program to calculate volume of the box(length * width * height). 
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor. 
Create the local objects in respective case and call the function to caluclate area. 
Menu options ->  
1. Calculate Volume with default values 
2. Calculate Volume with length,breadth and height with same value 
3. Calculate Volume with different length,breadth and height values.*/

#include<iostream>
using namespace std;
 

class Box
{
    int length;
    int width;
    int height;

    public:

    
    Box()
    {
        length = 1;
        width = 1;
        height = 1;

    }

    
    Box(int value)
    {
        length = value;
        width = value;
        height  = value;
    }

    
    Box(int l , int w , int h)
    {
        length = l;
        width = w;
        height = h;
    }

    int CalculateVolume()
    {
        return length * width * height; 
    }

};

int main()
{
    int value;
    int l , w , h;
    int choice;

    cout<<"Calculate Volume with default values"<<endl;
    cout<<"Calculate Volume with length,breadth and height with same value"<<endl;
    cout<<"Calculate Volume with different length,breadth and height values"<<endl;

    cout<<"Enter your choice:"<<endl;
    cin>>choice;

    switch (choice)
    {
        case 1:
        {
            Box b; 
            cout<<"Volume = "<<b.CalculateVolume()<<endl;
            break; 

        }

         case 2:
        {
            
            cout<<"Enter the value:"<<endl;
            cin>>value;
            Box b(value);

            cout<<"Volume ="<<b.CalculateVolume()<<endl;
            break; 

        }

        case 3:
        {
            cout<<"Enter length l:"<<endl;
            cin>>l;

            cout<<"Enter length w:"<<endl;
            cin>>w;

            cout<<"Enter length h:"<<endl;
            cin>>h;

            Box b(l ,w ,h);
            cout<<"Volume ="<<b.CalculateVolume()<<endl;
            break;

        }

            default:
            cout<<"Invalid Choice:"<<endl;
    }

      return 0;

}





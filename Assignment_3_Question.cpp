/*Q1. Write a class to find volume of a Cylinder by using following members. (volume of 
Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI) 
Class having following member functions: 
Cylinder() 
Cylinder(double radius, double height) 
getRadius() 
setRadius() 
getHeight() 
setHeight() 
calculateVolume() 
Initialize members using constructor member initializer list*/

#include<iostream>
using namespace std;

class Cylinder
{
    private:
    double radius;
    double height;
   
     static const double PI ;
    public:
     
    
    Cylinder(void) : radius(0) , height(0)  
    {  }
    Cylinder(double radius , double height ) : radius(radius) , height(height) 
    {  }
    void setRadius(double radius)
    {
        this->radius = radius;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    double getRadius(void)
    {
        return this->radius;
    }
    double getHeight(void)
    {
        return this->height;
    }
    
    double calculateVolume()
    {
        return PI*radius*radius*height;
        
    }


    
};

   const double Cylinder::PI = 3.14;

int main()
{
    Cylinder c;
    c.setRadius(5);
    c.setHeight(10);
    c.getRadius();
    c.getHeight();
    cout<<"Volume of Cylinder:"<<c.calculateVolume();
    return 0;
}




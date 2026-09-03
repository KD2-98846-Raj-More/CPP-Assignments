/*Q1. Create a class Date with data memebrs day,month and year. 
Cretae a class Person with data members name,address and birthdate. The birthdate should be of 
type Date. 
Create a class Student with data members id, marks, course and joining date, end date. The joining 
date and end date should be of type date. 
Implement above classes. Test all functionalities in main(). 
(Note - Only Perform the Association in the above case. No need of Inheritance)*/


#include<iostream>
#include<string>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date() : day(0), month(0), year(0)
    {
    }

    Date(int day, int month, int year)
        : day(day), month(month), year(year)
    {
    }

    void setDay(int day)
    {
        this->day = day;
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    int getDay()
    {
        return this->day;
    }

    int getMonth()
    {
        return this->month;
    }

    int getYear()
    {
        return this->year;
    }

    void printDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
private:
    string name;
    string address;
    Date birthdate;

public:
    Person() : name(""), address(""), birthdate()
    {
    }

    Person(string name, string address, Date birthdate)
        : name(name), address(address), birthdate(birthdate)
    {
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setAddress(string address)
    {
        this->address = address;
    }

    void setBirthdate(Date birthdate)
    {
        this->birthdate = birthdate;
    }

    string getName()
    {
        return this->name;
    }

    string getAddress()
    {
        return this->address;
    }

    Date getBirthdate()
    {
        return this->birthdate;
    }

    void printPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Birthdate : ";
        birthdate.printDate();
    }
};

class Student
{
private:
    int id;
    double marks;
    string course;
    Date joiningDate;
    Date endDate;

public:
    Student()
        : id(0), marks(0), course(""), joiningDate(), endDate()
    {
    }

    Student(int id, double marks, string course,
            Date joiningDate, Date endDate)
        : id(id), marks(marks), course(course),
          joiningDate(joiningDate), endDate(endDate)
    {
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setMarks(double marks)
    {
        this->marks = marks;
    }

    void setCourse(string course)
    {
        this->course = course;
    }

    void setJoiningDate(Date joiningDate)
    {
        this->joiningDate = joiningDate;
    }

    void setEndDate(Date endDate)
    {
        this->endDate = endDate;
    }

    int getId()
    {
        return this->id;
    }

    double getMarks()
    {
        return this->marks;
    }

    string getCourse()
    {
        return this->course;
    }

    Date getJoiningDate()
    {
        return this->joiningDate;
    }

    Date getEndDate()
    {
        return this->endDate;
    }

    void printStudent()
    {
        cout << "ID : " << id << endl;
        cout << "Marks : " << marks << endl;
        cout << "Course : " << course << endl;

        cout << "Joining Date : ";
        joiningDate.printDate();

        cout << "End Date : ";
        endDate.printDate();
    }
};

int main()
{
    Date birthdate(10, 5, 2000);

    Person p1;

    p1.setName("Raj");
    p1.setAddress("Pune");
    p1.setBirthdate(birthdate);

    cout << "----- PERSON -----" << endl;
    p1.printPerson();

    Date joiningDate(1, 8, 2024);
    Date endDate(31, 7, 2027);

    Student s1;

    s1.setId(101);
    s1.setMarks(85.5);
    s1.setCourse("C++");
    s1.setJoiningDate(joiningDate);
    s1.setEndDate(endDate);

    cout << "\n----- STUDENT -----" << endl;
    s1.printStudent();

    return 0;
}
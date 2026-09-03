/*Q2. Implement following classes. Test all functionalities in main() of each created class. Note that 
employee is inherited into manager and salesman.*/

#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee() : id(0), salary(0)
    {
    }

    Employee(int id, double salary)
        : id(id), salary(salary)
    {
    }

    void setId(int id)
    {
        this->id = id;
    }

    int getId()
    {
        return this->id;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    double getSalary()
    {
        return this->salary;
    }

    void accept()
    {
        cout<<"Enter ID: ";
        cin>>id;

        cout<<"Enter Salary: ";
        cin>>salary;
    }

    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Manager : public Employee
{
private:
    double bonus;

public:
    Manager() : bonus(0)
    {
    }

    Manager(int id, double salary, double bonus)
        : Employee(id, salary), bonus(bonus)
    {
    }

    void setBonus(double bonus)
    {
        this->bonus = bonus;
    }

    double getBonus()
    {
        return this->bonus;
    }

    void accept()
    {
        Employee::accept();

        cout<<"Enter Bonus: ";
        cin>>bonus;
    }

    void display()
    {
        Employee::display();

        cout<<"Bonus: "<<bonus<<endl;
    }

    void acceptManager()
    {
        accept();
    }

    void displayManager()
    {
        display();
    }
};

class Salesman : public Employee
{
private:
    double commission;

public:
    Salesman() : commission(0)
    {
    }

    Salesman(int id, double salary, double commission)
        : Employee(id, salary), commission(commission)
    {
    }

    void setCommission(double commission)
    {
        this->commission = commission;
    }

    double getCommission()
    {
        return this->commission;
    }

    void accept()
    {
        Employee::accept();

        cout<<"Enter Commission: ";
        cin>>commission;
    }

    void display()
    {
        Employee::display();

        cout<<"Commission: "<<commission<<endl;
    }

    void acceptSalesman()
    {
        accept();
    }

    void displaySalesman()
    {
        display();
    }
};

class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
    }

    SalesManager(int id, double salary, double bonus, double commission)
        : Manager(id, salary, bonus),
          Salesman(id, salary, commission)
    {
    }

    void accept()
    {
        Manager::accept();
        Salesman::setCommission(0);

        cout<<"Enter Commission: ";
        double commission;
        cin>>commission;

        Salesman::setCommission(commission);
    }

    void display()
    {
        Manager::display();

        cout<<"Commission: "<<Salesman::getCommission()<<endl;
    }
};

int main()
{
    cout<<"===== Employee ====="<<endl;

    Employee e;
    e.accept();
    e.display();

    cout<<"\n===== Manager ====="<<endl;

    Manager m;
    m.accept();
    m.display();

    cout<<"\n===== Salesman ====="<<endl;

    Salesman s;
    s.accept();
    s.display();

    cout<<"\n===== SalesManager ====="<<endl;

    SalesManager sm;
    sm.accept();
    sm.display();

    return 0;
}
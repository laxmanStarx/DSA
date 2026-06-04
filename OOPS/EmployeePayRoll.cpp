#include<iostream>
using namespace std;

class Employee
{
protected:
    int empId;
    string empName;
    double basicSalary;

public:

    void getEmployee()
    {
        cout<<"Enter Employee ID: ";
        cin>>empId;

        cout<<"Enter Employee Name: ";
        cin>>empName;

        cout<<"Enter Basic Salary: ";
        cin>>basicSalary;
    }

    virtual void CalculateSalary() = 0;

    void displayDetails()
    {
        cout<<"\nEmployee ID : "<<empId<<endl;
        cout<<"Employee Name : "<<empName<<endl;
        cout<<"Basic Salary : "<<basicSalary<<endl;
    }
};

class Manager : public Employee
{
public:

    void CalculateSalary() override
    {
        double totalSalary = basicSalary + 5000;

        displayDetails();

        cout<<"Bonus : 5000"<<endl;
        cout<<"Total Salary : "<<totalSalary<<endl;
    }
};

class Developer : public Employee
{
public:

    void CalculateSalary() override
    {
        double totalSalary = basicSalary + 3000;

        displayDetails();

        cout<<"Bonus : 3000"<<endl;
        cout<<"Total Salary : "<<totalSalary<<endl;
    }
};

int main()
{
    int choice;

    cout<<"1. Manager"<<endl;
    cout<<"2. Developer"<<endl;
    cout<<"Enter Choice: ";
    cin>>choice;

    if(choice == 1)
    {
        Manager m;
        m.getEmployee();
        m.CalculateSalary();
    }
    else if(choice == 2)
    {
        Developer d;
        d.getEmployee();
        d.CalculateSalary();
    }
    else
    {
        cout<<"Invalid Choice";
    }

    return 0;
}
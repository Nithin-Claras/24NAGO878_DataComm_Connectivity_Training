#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int empid;
    string name;
public : 
    //virtual Employee( ) 
    Employee( ) 
    {
        // cout <<"Enter the empid and name : ";
        // cin >> empid >> name;
    }
    virtual void readEmployee( ) {
        cout <<"Base Class Read Employee \n";
    }
    virtual void printEmployee( ) {
        cout <<"Base Class Print Employee \n";
        //cout << "Emp Id   : " << empid << endl;
        //cout << "Emp Name : " << name << endl;
    }
};

class SalariedEmployee : public Employee
{
    int Salary;
public:
    void printEmployee() override
    {
        cout << "Derived Class Print Employee \n";
    }
};


int main()
{
    // Employee    e1;
    
    // e1.printEmployee();
    
    // SalariedEmployee s1;
    // s1.printEmployee();
    
    Employee *ptrBase;
    Employee e1;
    SalariedEmployee s1;
    
    // ptrBase = &e1;
    // ptrBase->printEmployee();
    
    ptrBase = &s1;
    ptrBase->printEmployee();
    
    cout << is_polymorphic<SalariedEmployee>() << endl;
    cout << sizeof(Employee) << endl;
    cout << sizeof(SalariedEmployee) << endl;
    
    return 0;
}




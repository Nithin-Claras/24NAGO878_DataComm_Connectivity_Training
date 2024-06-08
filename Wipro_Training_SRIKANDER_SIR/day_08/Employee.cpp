#include <iostream>
#include <string>
#include "employee.h"

using namespace std;


Employee::Employee( ) 
{
    cout <<"Enter the empid and name : ";
    cin >> empid >> name;
}
void Employee::printEmployee( ) {
    cout << "Emp Id   : " << empid << endl;
    cout << "Emp Name : " << name << endl;
}


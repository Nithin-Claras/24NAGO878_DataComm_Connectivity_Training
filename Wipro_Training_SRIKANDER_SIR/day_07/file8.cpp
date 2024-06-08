#include<iostream>
#include<string>
using namespace std;
#pragma pack(1)
class Employee
{
protected:
	int empid;
	string name;
public:
	Employee()
	{
		cout << "constructor" << endl;
	}
	void readEmployee()
	{
		cout << "Enter the empid and name : ";
		cin >> empid >> name;
	}
	void printEmployee()
	{
		cout << "Emp Id : " << empid << endl;
		cout << "Emp Name : " << name << endl;
	}
};

class SalaryEmp : public Employee
{
	int salary;
public:
	SalaryEmp()
	{
		cout << "derived constructor" << endl;
	}
	void readSalaryEmployee()
	{
		readEmployee();
		cout <<"Enter the salary :";
		cin >> salary;
	}
	void printSalaryEmployee()
	{
		printEmployee();
		cout <<"Salary :" << salary << endl;
	}
};

int main()
{
	SalaryEmp e1;
	e1.readEmployee();
	e1.printEmployee();
	
	e1.readSalaryEmployee();
	e1.printSalaryEmployee();
	
	//cout << sizeof(Employee) << endl;
	//cout << sizeof(SalaryEmp) << endl;
	return 0;
}

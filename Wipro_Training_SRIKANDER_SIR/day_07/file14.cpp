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
	Employee(int p_emp_id=0, const string &p_name="")
	{
		empid = p_emp_id;
		name = p_name;
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
	SalaryEmp(int p_emp_id, const string &p_name, int p_salary) : Employee(p_emp_id,p_name)
	{
		salary = p_salary;
	}
	void printSalaryEmployee()
	{
		cout <<"Salary :" << salary << endl;
	}
	/* friend ostream operator<<(ostream &out, const Emloyee &e)
	{
		e.print(out);
		return out;
	} */
};

int main()
{
	SalaryEmp e1 (1,"Afds", 4255);
	
	e1.printSalaryEmployee();
	
	Employee e;
	
	e = e1;
	
	
	
	

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

// compiler provides default constructor if the user does not provide parameterized constructor.
// compiler does not provide default constructor if the user provides parameterized constructor.
class Employee
{
	int Emp_id;
	string name;
	int salary;
public: 
	Employee( ) = default;
	
	Employee(int p_empid)
	{
	}
	~Employee( )
	{
		cout << "Destructor " << this << endl;
	}
};

void func()
{
	cout << "Start of Function \n";
	static Employee el;
}

int main()
{
	func();
	cout << "Back in Main \n";
	func();
}



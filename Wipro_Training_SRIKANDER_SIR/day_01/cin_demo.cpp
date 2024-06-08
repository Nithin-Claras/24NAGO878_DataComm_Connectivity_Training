// Demo of how to use cout and cin
#include <iostream>

using namespace std;

int main()
{
	int empid = 0;
	char name[20] = "";
	cout << " Enter the Employee id : ";
	cin >> empid;
	cout << " Enter the name : ";
	cin >> name;
	
	cout << " Emp id   : " << empid << endl;
	cout << " Emp Name : " << name << endl;
}


#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Student
{
	private: int regno;
	public : int marks;
	
	Student() 
	{
	}
	~Student()
	{
	}
	void printStudent() const
	{
		cout << "Print Student : this = " << this << "\n";
		cout << regno << " " << marks << endl;
	}
};

int main()
{
	Student s1;
	const Student s2;
	
	s1.printStudent();
	s2.printStudent();
	
	cout << sizeof(s1) << endl;
	cout << sizeof(Student) << endl;
}

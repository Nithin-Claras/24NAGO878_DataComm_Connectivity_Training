// Class

#include <iostream>
#include <string>
#include <cstring>


using namespace std;

class Student
{
	int regno;
	string name;
	
public: Student( )
	{
		cout << "Constructor with zero arguments \n";
		cout << "this : " << this << endl;
	}
        Student(int regno, string p_name)
	{
		this->regno = regno;
		name = p_name;
		cout << "this : " << this << endl;
	}
	
	void readStudent()
	{
		cout << "Enter Student details \n";
		cin >> regno >> name;
	}
	
 	void printStudent()
	{
		cout << "Print Student : this" << this << "\n";
		cout << regno << " " << name << endl;
	}
	
};

int main()
{
	Student s1 = {1, "Nithin"};
	Student s2;
	Student s3 = {1, "Avinash Yadav"};
	
	cout << "&s1 = " << &s1 << endl;
	cout << "&s2 = " << &s2 << endl;
	cout << "&s3 = " << &s3 << endl;
	
	s2.readStudent();
	s1.printStudent();
	s2.printStudent();
}

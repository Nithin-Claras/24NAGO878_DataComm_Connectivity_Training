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
        Student(int p_int, string p_name)
	{
		regno = p_int;
		name = p_name;
		cout << "this : " << this << endl;
	}
	
 	void readStudent()
	{
		cout << "Read Student \n";
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
	s1.readStudent();
}

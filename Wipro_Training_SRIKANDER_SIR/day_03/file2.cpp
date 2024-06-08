// Class

#include <iostream>
#include <cstring>


using namespace std;

class Student
{
	int regno;
	char name;
	
public: Student(int p_int, char p_name)
	{
		regno = p_int;
		name = p_name;
	}
	
 	void readStudent()
	{
		cout << "Read Student \n";
	}
};

int main()
{
	Student s1 = {1, 'N'};
	s1.readStudent();
}

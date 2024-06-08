// structure

#include <iostream>

using namespace std;

struct Student
{
	int regno;
	char name[20];
	
	void readStudent()
	{
		cout << "Read Student \n";
	}
};

int main()
{
	Student s1;
	s1.readStudent();
}

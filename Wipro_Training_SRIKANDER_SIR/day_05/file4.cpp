#include<iostream>
#include<cstring>
using namespace std;

class Student
{
	 static int count;
	 int regno;
	 string name;
public:
	Student (string p_name);
	void display();
	static void disp_no_of_Students()
	{
		cout << count << endl;
	}
	
};

int Student::count = 0;

Student:: Student(string p_name)
{
	count++;
	regno = count;
	name = p_name;
}
void Student::display()
{
	cout << regno <<" " << name << endl;
}

/* void disp_no_of_Students()
{
	cout << count << endl;
} */

int main()
{
	Student s1("Nithin");
	Student s2("Arsh");
	
	Student::disp_no_of_Students();
	
	s1.display();
	s2.display();
	
	return 0;
}
	

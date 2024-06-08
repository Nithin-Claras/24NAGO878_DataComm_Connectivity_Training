#include <iostream>
#include <cstring>
using namespace std;

class Student
{
  static int count;
         int regno;
         string name;
public:
  Student(const string &p_name) : name(p_name) {
    count = count + 1;
    regno = count;
  }
  Student(const Student &obj) = delete;
  Student &operator =(const Student &rhs) = delete;
  static void totalStudents( );
};

int Student::count = 0;

void Student::totalStudents( )
{
   cout <<"Total number of students : " << count << endl; 
}

int main(){
  Student  s1{"Sikander"};
  Student  s2{"Dharani"};
  Student::totalStudents();
  return 0;
}


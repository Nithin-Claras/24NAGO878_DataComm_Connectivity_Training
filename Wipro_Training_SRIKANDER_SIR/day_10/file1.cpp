#include <iostream>
#include<vector>

using namespace std;

struct Student
{
    
};
class Employee
{
    
};
int main()
{
    auto x = 1;
    auto y = 3.0;
    auto z = 'a';
    Student s;
    
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;
    cout << typeid(s).name() << endl;
    cout << typeid(Employee).name() << endl;
    
    return 0;
}


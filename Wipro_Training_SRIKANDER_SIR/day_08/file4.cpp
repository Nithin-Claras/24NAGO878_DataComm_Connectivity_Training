#include <iostream>
#include <string>

using namespace std;

class A 
{
    int a[20];
};
class B1 : virtual public A
{
    int b1[20];
};
class B2 : virtual public A
{
    int b2[20];
};
class C : public B1,public B2
{
    
};

int main()
{
    C obj;
    // obj.B1::a = 5;
    // obj.B2::a = 5;
    cout << sizeof(C) << endl;
    
    return 0;
}


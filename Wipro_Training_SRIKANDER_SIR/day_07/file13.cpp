#include <iostream>
using namespace std;
class A 
{
public:  int a;
public : A() {
            cout << " A ";}
};
class B1 : public A 
{
public:  int b1;
public : B1() { 
            cout << " B1 ";}
};
class B2 : public A 
{
public:  int b2;
public : B2() { 
            cout << " B2 ";}
};
class C :public B1, public B2
{
public : C() {
        cout << " C ";}
};
int main()
{
    C obj_a;
    obj_a.b1 = 0; // valid
    obj_a.b2 = 0;
    //obj_a.a = 0;
    cout << sizeof(C)<< endl;
    // obj_a.pub_A = 0;

    return 0;
}


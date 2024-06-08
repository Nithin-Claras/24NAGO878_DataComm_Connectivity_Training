#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class A 
{
public : 
	A(int a)
	{
		cout << "A";
	}
};
class B 
{
public: 
	B(int b)
	{
		cout << "B";
	}
};
class C : public B, public A
{
public:
	C(int a, int b, int c) : A(a),B(b)
	{
		cout << "C";
	}
};
int main()
{
    C  obj_a{12,23,34};
    //obj_a.pub_A = 0;
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
 
    return 0;
}


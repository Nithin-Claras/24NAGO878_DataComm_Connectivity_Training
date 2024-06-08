#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class A 
{
public : 
	int a;
	A(int a)
	{
		cout << "A";
	}
};
class B1 : virtual public A
{
public: 
	int b1;
	B1(int b) : A(0), b1(b)
	{
		cout << "B1";
	}
};
class B2 : virtual public A
{
public: 
	int b2;
	B2(int b): A(0), b2(b)
	{
		cout << "B2";
	}
};
class C : public B1, public B2
{
public:
	int c;
	C(int a, int b, int c) : A(a),B1(b),B2(b),C(c)
	{
		cout << "C";
	}
};
int main()
{
    C  obj_a{12,23,34,44};
    
    //obj_a.b1 = 0;
    //obj_a.b2 = 0;
    //obj_a.a = 0;
    //obj_a.pub_A = 0;
    cout << sizeof(A) << endl;
    cout << sizeof(B1) << endl;
    cout << sizeof(C) << endl;
    
    
 
    return 0;
}


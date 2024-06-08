#include <iostream>
#include <string>
#include <algorithm>

class A 
{
private : 
	int priv_A;
protected : 
	int prot_A;
public : 
	int pub_A;
};
class B : protected A 
{
public: 
	B()
	{
		prot_A = 0;
	}
};
class C : public B 
{
public:
	C()
	{
		prot_A = 0;
	}
};
int main()
{
    C  obj_a;
    //obj_a.pub_A = 0;
 
    return 0;
}


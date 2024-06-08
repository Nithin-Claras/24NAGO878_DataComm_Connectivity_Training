#include <iostream>
#include <cstring>
using namespace std;

class Integer
{
public:
	int value;
	static int x;
};
/* ostream & operator <<(ostream &out,const Integer &obj)
{
} */
int Integer::x = 0;
int main()
{
	Integer obj1;
	Integer obj2;
	
	obj1.value = 5;
	obj1.x = 5;
	obj2.value = 8;
	obj2.x = 8;
	
	cout << "obj1.value : " << obj1.value << endl;
	cout << "obj1.x : " << obj1.x << endl;
	cout << "obj2.value : " << obj2.value << endl;
	cout << "obj2.x : " << obj2.x << endl;
	
	cout << "obj1.value : " << &obj1.value << endl;
	cout << "obj1.x : " << &obj1.x << endl;
	cout << "obj2.value : " << &obj2.value << endl;
	cout << "obj2.x : " << &obj2.x << endl;
	
	return 0;
}

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	auto x = 5;
	auto y = 4.5;
	auto c = 'A';
	auto my_name = "Nithin Claras is learning c++";
	
	cout <<"Size of c : " << sizeof(c) <<" " << typeid(c).name() << endl;
	cout <<"Size of x : " << sizeof(x) <<" " << typeid(x).name() << endl;
	cout <<"Size of y : " << sizeof(y) <<" " << typeid(y).name() << endl;
	
	cout <<"Size of my_name : " << sizeof(my_name) <<" " << typeid(my_name).name() << endl;
}

#include <iostream>

using namespace std;

int main()
{
	int x = 5;
	const int y = 8;
	
	auto p1 = &x;   // int *pi = &x;
	auto p2 = &y;   // const int *p2 = &y;
	
	cout << typeid(p1).name() << endl;
	cout << typeid(p2).name() << endl;
}

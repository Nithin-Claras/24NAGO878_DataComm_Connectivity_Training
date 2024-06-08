#include <iostream>

using namespace std;

int add(int a , int b)
{
	cout << "Add \n";
	return a + b;
}

int sub(int a , int b)
{
	cout << "Sub \n";
	return a + b;
}

int main()
{
	auto ptr = sub;
	cout << ptr(5,10) << endl;
}



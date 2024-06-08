#include<iostream>
#include<algorithm>

using namespace std;

int add(int a, int b)
{
	cout << "Add function" << a << " " << b << endl;
	return a+b;
}

int gcd(int a, int b)
{
	cout << "GCD is" << a <<  " " << b <<endl;
	return a;
}

int main()
{
	int res = add(5,10);
	
	int (*ptr) (int,int);
	
	ptr = add;
	
	ptr(12,34);
	
	ptr = gcd;
	ptr(10,10);
	return 0;
	
}

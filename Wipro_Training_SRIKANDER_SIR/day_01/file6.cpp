//constant references

#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	const int &a = x;
	cout << x <<" " << a << endl;
	//a = 10;
	x = 20;
	cout << x <<" "<< a << endl;
	return 0;
}

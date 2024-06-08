//constant references

#include <iostream>
using namespace std;

int main()
{
	const int x = 5;
	//int &a = x;
	const int &b = x;
	
	cout << x <<" "<< b << endl;
	return 0;
}

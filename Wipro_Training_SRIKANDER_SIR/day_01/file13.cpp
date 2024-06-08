// largest number

#include <iostream>

using namespace std;

//int mymax(int a = 0, int b, int c = 0);
//int mymax(int a, int b = 0, int c);
int mymax(int a, int b, int c = 0);

int main()
{
	cout << mymax(5,10) << endl;
	cout << mymax(12,6) << endl;
	cout << mymax(12,6,18) << endl;
}

int mymax(int a, int b, int c)
{
	return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

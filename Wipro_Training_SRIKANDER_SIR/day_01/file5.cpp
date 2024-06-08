#include <iostream>
using namespace std;

int main()
{
	int x = 5, y = 10;
	cout <<" &x = "<<&x << endl;
	cout <<" &y = "<<&y << endl;

	int &altName = x;
	cout << &altName << " " << &altName <<endl;

	altName = y;
	cout << &altName << " " << &altName <<endl; 
	return 0;
}

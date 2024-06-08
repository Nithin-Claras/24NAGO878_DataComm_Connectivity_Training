// Pointer reassigned to another pointer

#include <iostream>
using namespace std;

int main()
{
	int x = 5, y = 10;
	cout <<" &x = "<<&x << endl;
	cout <<" &y = "<<&y << endl;

	int *ptr = &x;
	cout << ptr << " " << *ptr<<endl;

	ptr = &y;
	cout << ptr << " " << *ptr<<endl; 
	return 0;
}

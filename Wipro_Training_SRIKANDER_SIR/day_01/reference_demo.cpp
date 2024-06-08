#include <iostream>
using namespace std;

int main(){
	int object = 5;
	//int a = 1, b = 10;
	//int &ref;
	int &ref = object;
	//int &ref = a + b;
	
	cout << "&object = " << &object << endl;
	cout << "&ref    = " << &ref    << endl;
	
	cout << "object = " << object << endl;
	cout << "ref    = " << ref    << endl;
	
	return 0;
}

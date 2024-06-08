// template 

#include <iostream>

using namespace std;

template <typename T>
T mymax(T  a,T  b)
{
	cout << typeid(a).name() << endl;
	return a > b ? a : b;
}

/* int max(int a, int b)
{
	cout << "Max : int \n";
	return a > b ? a : b;
}

float max(float a, float b)
{
	cout << "Max : float \n";
	return a > b ? a : b;
} */

int main()
{
	int a = 5, b = 8;
	float x = 6.3, y = 7.3;
	
	cout << max(5, 8) << endl;
	cout << max(1.2f,7.9f)  << endl;
}


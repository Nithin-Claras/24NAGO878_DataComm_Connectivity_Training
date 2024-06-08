//call by value

#include <iostream>

void myswap(int a, int b)
{
	a = a ^ b; 
	b = a ^ b; 
	a = a ^ b;
}

int main()
{

	int a = 5; int b = 10;
	myswap(a , b);
	
	std::cout << a <<" " << b << std::endl;
}

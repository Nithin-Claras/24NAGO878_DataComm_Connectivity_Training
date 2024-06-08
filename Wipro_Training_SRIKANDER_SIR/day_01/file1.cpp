//using reference example

#include <iostream>
using namespace std;

void update(int *ptr)
{
	*ptr++;
}
int main() 
{
	int x = 5;
	update( &x );
	cout << "Main x = " << x;
	
	return 0;
}

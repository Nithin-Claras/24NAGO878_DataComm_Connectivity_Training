// string copy

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int a[5] = {12,23,21,43,56};
	
	int b[5] = {0};
	
	memcpy(b, a, 5 * sizeof(int));
	
	for(int i=0; i<5; i++)
	{
		cout << b[i] << " " << endl;
	}
}

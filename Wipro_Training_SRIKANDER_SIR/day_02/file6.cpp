#include <iostream>
using namespace std;


void printArray(int arr[])
{
	/* for(int ele : arr)
	{
		cout<< ele << endl;
	} */
}

int main () 
{
	int arr[] = {12,23,21,32,34,56,76};
	
	// printArray( arr );
	
	for(int ele : arr)
	{
		cout<< ele << endl;
	}
	
	return 0;
}


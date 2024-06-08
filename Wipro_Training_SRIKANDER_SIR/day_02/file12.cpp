#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool isPrime(int num)
{
	for(int i = 2; i <= num/2; i++)
		if(num % i ==0)
			return false;
		return true;
}

int main()
{
	int arr[] = {12,23,34,55,67,54,56};
	int *ptr = find_if(begin(arr), end(arr), isPrime);
	if(ptr == end(arr))
		cout << "There are no prime numbers \n";
	else
		cout << "First Prime number is : " <<*ptr << endl;
	return 0;
}

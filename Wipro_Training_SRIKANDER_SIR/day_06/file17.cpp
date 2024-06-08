#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[] = {12,23,34,43,2,21};
	auto it = find_if(begin(arr), end(arr),[](int num){ return num%2!=0; });
	
	cout << *it << endl;
	return 0;
}

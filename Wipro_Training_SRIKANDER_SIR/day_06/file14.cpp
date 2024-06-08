#include<iostream>
#include<algorithm>
using namespace std;

bool func(int a, int b)
{
	return a>b;
}

int main()
{
	int arr[] = {12,23,34,53,32,21};
	
	sort(begin(arr), end(arr),func);
	
	for(int ele : arr)
		cout << ele << " ";
	cout << endl;
	return 0;
}

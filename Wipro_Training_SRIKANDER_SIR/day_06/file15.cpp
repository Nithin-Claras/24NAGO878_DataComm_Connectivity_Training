#include<iostream>
#include<algorithm>
using namespace std;

bool func(string a, string b)
{
	return a.length()<b.length();
}

int main()
{
	string arr[] = {"Kolkata","Chennai","Mumbai","Hyderabad"};
	
	sort(begin(arr), end(arr),func);
	
	for(string ele : arr)
		cout << ele << " ";
	cout << endl;
	return 0;
}

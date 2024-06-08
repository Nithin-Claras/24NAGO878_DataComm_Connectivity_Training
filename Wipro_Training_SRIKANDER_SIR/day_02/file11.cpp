#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool compare(const string &a, const string &b)
{
	return a.length() < b.length();
}

int main()
{
	string names[] = {"Nithin", "Akash", "Charles", "Ashwin", "Astin"};
	
	cout <<"Before sorting \n";
	for(string ele : names)
		cout << ele <<" ";
	sort(begin(names), end(names), compare);
	
	cout << "\n After Sorting \n";
	for(string ele : names)
		cout << ele << " ";
		
	return 0;
}


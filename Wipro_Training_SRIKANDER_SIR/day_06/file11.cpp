#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

bool isOdd(int ele)
{
	cout << "Function called with " << ele << endl;
	return ele%2 != 0;
}

int main()
{
	vector<int> v={12,203,34,45,56};
	vector<int>::iterator it = find_if(begin(v),end(v),isOdd);
	if(it == v.end())
		cout <<"We don't have any odd elements \n";
	else
		cout <<"First Odd Element: " << *it << endl;
	return 0;
}

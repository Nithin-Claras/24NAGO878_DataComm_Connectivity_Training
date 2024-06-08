#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int ele)
{
	if(ele <= 1)
	{
		return false;
	}
	for(int i=2; i*i <= ele; i++)
	{
		if(ele%i == 0)
		{
			return false;
		}
	}
	return true;
};

int main()
{
	vector<int> v={12,23,34,45,56};
	vector<int>::iterator it = find_if(begin(v),end(v),isPrime);
	if(it == v.end())
		cout <<"We don't have any prime elements \n";
	else
		cout <<"First Odd Element: " << *it << endl;
	return 0;
}

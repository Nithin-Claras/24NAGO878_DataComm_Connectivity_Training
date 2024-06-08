#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int lower = 50;
	int upper = 80;
	vector<int> v={12,23,34,32,2,1,4,50};
	auto it = count_if( begin(v), end(v), [&lower,upper](int num)
	{
		return num >= ++lower && num <= upper;
	});
	cout << it << endl;
	cout << lower << endl;
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int key = 50;
	vector<int> v={12,23,34,32,2,1,4,50};
	auto it = count_if( begin(v), end(v), [key](int num)
	{
		return num > key;
	});
	cout << it << endl;
	return 0;
}

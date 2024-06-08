#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> v={12,23,34,32,2,1,4};
	auto it = count_if( begin(v), end(v), [](int num)
	{
		for(int i=2; i<num; i++)
			if(num%i == 0)
				return false;
			return true;
	});
	cout << it << endl;
	return 0;
}

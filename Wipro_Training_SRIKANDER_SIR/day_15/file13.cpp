#include <iostream>
#include <forward_list>
#include <algorithm>

using namespace std;

int main()
{
	forward_list<int> nums;
	
	nums.push_front(12);
	nums.push_front(23);
	nums.push_front(34);
	nums.push_front(45);
	
	auto it = find(begin(nums), end(nums), 23);
	if(it != end(nums))
		nums.insert_after(it, 78);
		
	for(int ele : nums)
		cout << ele << "-->";
	cout << endl;
	
	return 0;
}

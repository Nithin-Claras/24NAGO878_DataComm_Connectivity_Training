#include <iostream>
#include <forward_list>
#include <algorithm>

using namespace std;

int main()
{
	forward_list<int> nums;
	int key;
	
	nums.push_front(12);
	nums.push_front(23);
	nums.push_front(34);
	nums.push_front(45);
	
	for(int ele : nums)
		cout << ele << "-->";
	cout << endl;
	cout << "Enter the element to delete : ";
	cin >> key;
	
	auto it = find(begin(nums), end(nums), key);
	if(it != end(nums))
		nums.erase_after(it);
		
	cout << "\n After Erase \n";
		
	for(int ele : nums)
		cout << ele << "-->";
	cout << endl;
	
	return 0;
}

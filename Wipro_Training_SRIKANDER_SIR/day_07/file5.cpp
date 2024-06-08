#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	list<int> lst={12,23,34,45,55,56,78};
	lst.push_back(44);
	lst.push_front(77);
	list<int>::iterator it=lst.begin();
	
	while(it != lst.end())
	{
		cout << *it << ' ';
		it++;
	}
	
	cout << endl;
	lst.pop_back();
	lst.pop_front();
	
	it = lst.end();
	while(it != lst.begin())
	{
		it--;
		cout << *it << ' ';
	}
	
	/* while(it != lst.end())
	{
		cout << *it << ' ';
		it++;
	} */
}

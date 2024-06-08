#include<iostream>
#include<list>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	list<int> lst = {12,23,34,4,5,6};
	
	list<int>::iterator it = lst.begin();
	while(it != lst.end())
	{
		cout << *it << ' ';
		++it;
	}
	
	/* for(auto ele : lst)
		cout << ele << ' ';
		
	cout <<"Size : " << lst.size() << endl;
	for(int i = 0; i < lst.size() ; i++)
		cout << lst[i] << ' '; */
		
	return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	int ele;
	cout <<"Enter the number of element : ";
	cin >> n;
	vector<int> v(n);
	v.reserve(n);
	
	for(int i=0; i<n; i++) 
	{
		// cin >> v[i];
		cin >> ele;
		v.push_back(ele);
	}
	for(int i=0; i<v.size(); i++)
		cout << v.at(i) <<" ";
	
	return 0;
}

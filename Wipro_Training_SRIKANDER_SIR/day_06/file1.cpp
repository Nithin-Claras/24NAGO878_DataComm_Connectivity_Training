#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v={12,23,34,45};
	cout << v.at(4) << " " << endl;
	
	for(int i=0; i<v.size(); i++)
		cout << v.at(i) << " " << endl;
	
	return 0;
}

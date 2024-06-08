#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2={12,23,34,45};
	vector<int> v3={21,32,43,54,65,76,87};
	
	cout <<"v1 : " << sizeof(v1) <<" "<< v1.size() << endl;
	cout <<"v2 : " << sizeof(v2) <<" "<< v2.size() << endl;
	cout <<"v3 : " << sizeof(v3) <<" "<< v3.size() << endl;
	
	
	return 0;
}

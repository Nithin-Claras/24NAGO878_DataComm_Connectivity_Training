/******************************************************************************
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &v)
{
    cout << "Size : " << v.size() << endl;
    for(int &ele : v)
        cout << ele <<' ';
    cout << endl;
}
int main()
{
    vector<int>  v = {12,23,34,45,56};
    vector<int>::iterator it = v.begin();
    
    while(it != v.end())
    // while(it < v.end())
    {
    	cout << *it << endl;
    	++it;
    }
    
    return 0;
}                                                                               



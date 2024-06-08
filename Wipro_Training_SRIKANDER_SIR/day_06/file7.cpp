/******************************************************************************
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &v)
{
    for(int &ele : v)
        cout << ele <<' ';
    cout << endl;
}
int main()
{
    // vector<int>  v = {12,23,34,45,56};
    vector<int>  v;
    
    printVector(v);
    
    // Remove the last Element 
    v.pop_back();
    
    printVector(v);
    
    return 0;
}                                                                               



/******************************************************************************
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int ele;
    cout <<"Enter the number of element : ";
    cin >> n;
    vector<int>  v;
    v.reserve(n);
    for(int i = 0 ; i < n; i++){
        cin >> ele;
        v.push_back(ele);
    }
    
    vector<int>::iterator ptr = max_element(v.begin(), v.end());
    /* for(const int &ele : v)
        cout << ele <<" "; */
    cout << *ptr << endl;
    cout << ptr - v.begin() << endl;

    return 0;
}



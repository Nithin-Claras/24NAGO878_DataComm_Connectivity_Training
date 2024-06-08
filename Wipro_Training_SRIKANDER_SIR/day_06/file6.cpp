/******************************************************************************
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    string ele;
    cout <<"Enter the number of element : ";
    cin >> n;
    
    vector<string>  v;
    v.reserve(n);
    
    for(int i = 0 ; i < n; i++){
        cin >> ele;
        v.push_back(ele);
    }
    
    sort(v.begin(),v.end());
    
    for(const string &str : v)
    {
    	cout << str << endl;
    }

    return 0;
}



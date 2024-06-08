#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {12,23,34,45,56};
    
    try
    {
        int index;
        cout << "Enter the index : ";
        cin >> index;
        
        cout << "Element at index " << index << "=" << v.at(index) << endl;
    }
    catch(out_of_range &e)
    {
        cout << e.what() << endl;
    }
    // cout << v.at(5) << endl;
    // cout << v[5] << endl;
    

    return 0;
}



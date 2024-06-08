#include <iostream>
#include <algorithm>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int>   nums;
    int key;
    
    nums.push_front(12);        // 12
    nums.push_front(23);        // 23 12 
    nums.push_front(34);        // 34 23 12 
    nums.push_front(45);        // 45 34 23 12 
    for(int ele : nums)
        cout << ele <<"-->";
    cout << endl;
    cout <<"Enter the element to delete : ";
    cin >> key;
    auto it = find(begin(nums) , end(nums) , key);
    if(it != end(nums))     
    {
        cout <<"Element Found \n";
        auto it2 = it;
        it2++;
        if(it2 == end(nums))
            cout <<"It was the last element in the list can't be deleted \n";
        else
        {    
            *it = *it2;
            nums.erase_after(it);  // 45 34 78  12 
            cout <<"\n After Erase \n";
            for(int ele : nums)
                cout << ele <<"-->";
            cout << endl;    
        }
    }
    else
        cout <<"Element not found \n";
    
    cout << endl;
    return 0;
}















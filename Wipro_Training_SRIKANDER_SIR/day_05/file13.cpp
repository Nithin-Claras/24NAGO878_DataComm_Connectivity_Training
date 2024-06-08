/******************************************************************************
*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
template <class T>
void printVector(const T &marks)
{
    cout <<"Number of elements : "<< marks.size() << endl;
    for(auto &ele : marks)
    {
        cout << ele << " ";
    }
    cout << endl;
}
int main()
{
    vector<int>     marks = {12,23,34,45};
   
    printVector(marks);
   
    vector<string> names={"Arsh", "Abhishek", "Edwin"};
   
    printVector(names);
    return 0;
}
 


/******************************************************************************
*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printVector(const vector<int> &marks)
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
    marks.push_back(78);
    marks.emplace_back(89);
    printVector(marks);
    marks.pop_back();
    printVector(marks);
    return 0;
}
 


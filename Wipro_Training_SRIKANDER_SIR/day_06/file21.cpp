#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::vector<int> numbers = {21, 12, 3, 4, 5};
    std::vector<string> names = {"Nithin","Mary","Jesu","Joseph","Rabel"};
    
    auto compare = [](auto a,auto b){ return a > b ; };
    
    sort(begin(numbers), end(numbers) , compare);
    sort(begin(names), end(names), compare);
     
    for(auto ele : numbers)
        cout << ele << ' ';
    cout << endl;
    for(auto ele : names)
        cout << ele << ' ';
    cout << endl;
    return 0;
}



#include <iostream>
#include <set>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> myset;

    myset.push(60);
    myset.push(70);
    myset.push(30);
    myset.push(10);
    
    myset.pop();
    
    cout << myset.top() << endl;
    
    return 0;
}



#include <iostream>
#include <set>

int main() {
    std::set<int> myset;

    // Insert elements
    myset.insert(10);
    myset.insert(50);
    myset.insert(30);
    myset.insert(10); // Duplicate, will not be added

    // Output set elements
    std::cout << "Set elements: ";
    // for (const auto &elem : myset) {
    //     std::cout << elem << " ";
    // }
    auto it = myset.rend();
    while(it != myset.rbegin())
    {
    	it --;
    	std::cout << *it << " ";
    }
    
    
    return 0;
}



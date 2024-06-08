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
    
    
    for (auto it = myset.begin(); it != myset.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Find an element
    auto it = myset.find(50);
    if (it != myset.end()) {
        std::cout << "Element 20 found in the set" << std::endl;
        // std::cout << it - myset.begin();
    } else {
        std::cout << "Element 20 not found in the set" << std::endl;
    }

    // // Remove an element
    // myset.erase(20);

    // // Output set elements after removal
    // std::cout << "Set elements after erasing 20: ";
    // for (const auto &elem : myset) {
    //     std::cout << elem << " ";
    // }
    // std::cout << std::endl;

    return 0;
}



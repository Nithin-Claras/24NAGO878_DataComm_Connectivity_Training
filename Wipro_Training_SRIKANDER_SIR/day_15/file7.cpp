#include <iostream>
#include <set>

/* struct CustomComparator
{
	bool operator() (const int &lhs, const int &rhs) const {
		return lhs > rhs;
	}
}; */
int main() {
    std::multiset<int, std::greater<int>> myset;

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
    auto it = myset.rbegin();
    while(it != myset.rend())
    {
    	std::cout << *it << " ";
    	it ++;
    }
    
    
    return 0;
}



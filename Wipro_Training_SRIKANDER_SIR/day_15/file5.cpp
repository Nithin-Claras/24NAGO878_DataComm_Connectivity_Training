#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string  str;
    cout <<"Enter the string : ";
    cin >> str;
    
    std::set<char> uniqueCharacters;
    
    for(char c : str)
        uniqueCharacters.insert(c);
    
    cout << "Number of unique Characters : " << uniqueCharacters.size() << endl;
    
    std::cout << "Unique Characters: ";
    for (const auto &elem : uniqueCharacters) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    
    return 0;
}



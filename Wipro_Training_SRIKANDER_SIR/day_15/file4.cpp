#include <iostream>
#include <set>

using namespace std;

int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    
    set<int> uniqueDigits;
    
    while(num != 0)
    {
        int digit = num % 10;
        uniqueDigits.insert(digit);
        num = num/10;
    }
    
    cout << "Number of unique Digits : " << uniqueDigits.size() << endl;
    
    cout << "Unique Digits : ";
    for(const auto &elem : uniqueDigits)
    {
        cout << elem << " ";
    }
    cout << endl;
    
    return 0;
}


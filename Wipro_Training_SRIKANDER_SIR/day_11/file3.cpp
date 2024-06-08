#include <iostream>
using namespace std;

int main()
{
    int numerator = 0;
    int denominator = 0;
    
    cout << "Enter the value of numerator : ";
    cin >> numerator;
    cout << "Enter the vlaue of denominator : ";
    cin >> denominator;
    
    if(denominator != 0)
    {
        int quotient = numerator / denominator;
        printf("%d / %d = %d \n", numerator, denominator, quotient);
    }
    else {
        cout << "Denominator should not be zero \n";
    }
    
    return 0;
}


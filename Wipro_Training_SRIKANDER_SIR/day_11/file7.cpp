#include <iostream>
using namespace std;

int divide(int numerator, int denominator)
{
    if(denominator == 0)
            throw "Denominator should not be zero \n";
    return numerator / denominator;
}
int main()
{
    int numerator = 0;
    int denominator = 0;
    
    
    for(int i=0; i<3; ++i)
    {
        cout << "Enter the value of numerator : ";
        cin >> numerator;
        cout << "Enter the vlaue of denominator : ";
        cin >> denominator;
        try 
        {
            int quotient = divide(numerator,denominator);
            printf("%d / %d = %d \n", numerator, denominator, quotient);
        }
        catch(const char *msg)
        {
            cout << msg;
        }
    }
    
    
    return 0;
}


#include <iostream>
using namespace std;

void func(int *ptr)
{
    cout << "Function with Pointer \n";
}
void func(int x)
{
    cout << "Function with Integer \n";
}
int main()
{
    int x = 5;
    func(x);
    func(&x);
    //func(NULL);
    
    return 0;
}


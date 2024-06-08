#include <iostream>
#include<vector>

using namespace std;

class DS
{
public:
    virtual ~DS()
    {
        
    }
};
class Stack : public DS
{
    
};
class Queue : public DS
{
    
};
int main()
{
    int *a = new int{5};
    char *b;
    b = reinterpret_cast<char *>(a);
    
    cout << b << endl;
   
    
    return 0;
}


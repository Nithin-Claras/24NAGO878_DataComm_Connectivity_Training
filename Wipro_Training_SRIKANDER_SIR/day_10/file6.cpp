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
    Stack s;
    Queue q;
    //DS &ds_ref = s;
    DS &ds_ref = q;
    
    if(typeid(ds_ref) == typeid(Stack))
    {
        Stack &s_ref = static_cast<Stack &>(ds_ref);
    }
    
  
    
    return 0;
}


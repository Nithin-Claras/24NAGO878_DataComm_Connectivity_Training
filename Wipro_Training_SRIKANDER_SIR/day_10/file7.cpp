#include <iostream>
#include <vector>

using namespace std;
class DS
{
public : virtual ~DS() {}
};
class Stack : public DS 
{
public : void top() {
        cout << "Top Function of Stack \n";
    }
};
class Queue : public DS 
{
public : void front() {
        cout <<"Front Function of Queue \n";    
    }
};
int main()
{
    Stack s;
    Queue q;
    DS &ds_ref = s;
    
    if(typeid(ds_ref) == typeid(Queue))
    {
        Queue &q_ref = static_cast<Queue &>(ds_ref);
        q_ref.front();
    }
    else if(typeid(ds_ref) == typeid(Stack))
    {
        Stack &s_ref = static_cast<Stack &>(ds_ref);
        s_ref.top();
    }
    
    return 0;
}
// If we apply typeid on non-polymorphic class, it does CTTI.


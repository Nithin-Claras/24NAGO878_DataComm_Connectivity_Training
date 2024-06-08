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
    DS *ptr = new Stack();
    //DS *ptr = nullptr;
    
    cout << typeid(ptr).name() << endl;
    cout << typeid(*ptr).name() << endl;
    
    cout << is_polymorphic<Queue>() << endl;
    cout << is_abstract<Queue>() << endl;
    
    cout << is_polymorphic<Stack>() << endl;
    cout << is_abstract<Stack()>() << endl;
    
    if(typeid(*ptr) == typeid(Stack))
        cout << "Pointer to Stack object";
    else if(typeid(*ptr) == typeid(Queue))
        cout << "Pointer to Queue object";
   
    
    return 0;
}


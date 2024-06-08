#include <iostream>
#include <vector>
using namespace std;
// MyStack is a DataStructure
// MyQueue is a DataStructure

class DataStructure // Abstract Class 
{
protected:  
    vector<int>     v;
public :
    void push(int ele)
    {
        v.push_back(ele);
    }
    bool empty()
    {
        return v.size() == 0;
    }
    virtual int pop() = 0;// There wont be any definition
    virtual void display() = 0;
};
class MyStack : public DataStructure
{
public:
    
    int pop()
    {
        if(v.size() == 0)
            return 0;
        int ele = v.back();
        v.pop_back();
        return ele;
    }
    void display()
    {
        auto it = v.rbegin();
        while(it != v.rend())
        {
            cout << *it <<" ";
            it++;
        }
    }
    int top() 
    {
        return v.back();
    }
    
};
class MyQueue : public DataStructure
{
public:
    int front()
    {
        return v.front();
    }
    int pop()
    {
        if(v.size() == 0)
            return 0;
        int ele = v.front();
        v.erase(v.begin());
        return ele;
    }
    void display()
    {
        auto it = v.begin();
        while(it != v.end())
        {
            cout << *it <<" ";
            it++;
        }
    }
};

void menu(DataStructure *ds)
{
  for (;;) {
        int choice;
        cout << "1. Push 2. Pop 3. Display 4.";
        if(typeid(*ds) == typeid(MyQueue))
            cout <<"Front ";
        else
            cout <<"Top ";
        cout <<"5. Exit\n";
        
        cin >> choice;
 
        switch (choice) {
            case 1:
                int ele;
                cout << "Enter element to push: ";
                cin >> ele;
                ds->push(ele);
                break;
            case 2:
                if (!ds->empty())
                    cout << "Popped element: " << ds->pop() << endl;
                else
                {
                    if(typeid(*ds) == typeid(MyStack))
                        cout << "Stack is empty" << endl;
                    else
                        cout << "Queue is empty" << endl;
                }
                break;
            case 3:
                ds->display();
                break;
            case 4: 
            {
                if(typeid(*ds) == typeid(MyStack)){
                    MyStack *s = static_cast<MyStack *>(ds);
                    cout << s->top() << endl;
                }
                else
                {
                    cout << (static_cast<MyQueue *>(ds))->front() << endl;
                }
            }
            break;
            case 5:
                return;
            default:
                cout << "Invalid choice\n";
        }
    }  
}
int main()
{
    MyStack s;
    MyQueue q;
    cout << "Stack \n";
    menu(&s);
    cout <<"Queue \n";
    menu(&q);
    
    return 0;
}













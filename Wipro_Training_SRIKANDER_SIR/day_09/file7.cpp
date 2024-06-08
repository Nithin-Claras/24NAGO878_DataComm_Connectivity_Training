#include <iostream>
#include <vector>
using namespace std;

class DataStructure
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
    virtual int pop() = 0;
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
    
};
class MyQueue : public DataStructure
{
public:
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

int main()
{
    DataStructure *ptr;
    int ch;
    cout << "1. Stack 2. Queue \n";
    cin >> ch;
 
    if (ch == 1) 
        ptr = new MyStack();
    else
        ptr = new MyQueue();
    
    for (;;) {
        int choice;
        cout << "1. Push 2. Pop 3. Display 4. Exit\n";
        cin >> choice;
 
        switch (choice) {
            case 1:
                int ele;
                cout << "Enter element to push: ";
                cin >> ele;
                ptr->push(ele);
                break;
            case 2:
                if (!ptr->empty())
                    cout << "Popped element: " << ptr->pop() << endl;
                else
                    cout << "Stack is empty" << endl;
                break;
            case 3:
                ptr->display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
    return 0;
}













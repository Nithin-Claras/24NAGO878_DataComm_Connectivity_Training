#include <iostream>
#include <vector>
using namespace std;


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

void menu(DataStructure &ds)
{
  for (;;) {
        int choice;
        cout << "1. Push 2. Pop 3. Display 4. Exit\n";
        cin >> choice;
 
        switch (choice) {
            case 1:
                int ele;
                cout << "Enter element to push: ";
                cin >> ele;
                ds.push(ele);
                break;
            case 2:
                if (!ds.empty())
                    cout << "Popped element: " << ds.pop() << endl;
                else
                {
                    if(typeid(ds) == typeid(MyStack))
                        cout << "Stack is empty" << endl;
                    else
                        cout << "Queue is empty" << endl;
                }
                break;
            case 3:
                ds.display();
                break;
            case 4:
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
    menu(s);
    cout <<"Queue \n";
    menu(q);
    
    return 0;
}













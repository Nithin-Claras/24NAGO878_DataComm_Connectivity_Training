#include <iostream>
#include <vector>
using namespace std;

class MyStack
{
    vector<int>     v;
public:
    void push(int ele)
    {
        v.push_back(ele);
    }
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
        cout << endl;
    }
};
class MyQueue
{
    vector<int>     v;
public:
    void push(int ele)
    {
        v.push_back(ele);
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
        cout << endl;
    }
};

int main()
{
    int ch;
    cout << "1. Stack 2. Queue \n";
    cin >> ch;

    if(ch == 1)
    {
        // Menu for stack.
        MyStack s;
        for(;;)
        {
            int choice, ele;
            cout <<"1. Push 2. Pop 3. Display \n";
            cin >> choice;
            switch(choice)
            {
                case 1:
                    cout << "Enter the element to push : ";
                    cin >> ele;
                    s.push(ele);
                    cout << "Element pushed successfully. \n";
                    break;
                case 2:
                    ele = s.pop();
                    if (ele == 0) 
                        cout << "Stack is empty!\n";
                    else 
                        cout << ele << endl;
                    break;
                case 3:
                    s.display();
                    break;
                default:
                    cout << "Invalid choice\n";
            }
        } 
    }
    else
    {
        // Menu for queue
        MyQueue q;
        for(;;)
        {
            int choice, ele;
            cout << "1. Push 2. Pop 3. Display 4. Exit \n";
            cin >> choice;
            switch(choice)
            {
                case 1:
                    cout << "Enter the Element to push :";
                    cin >> ele;
                    q.push(ele);
                    break;
                case 2:
                    ele = q.pop();
                    if (ele == 0)
                        cout << "Queue is empty";
                    else
                        cout << ele << endl;
                    break;
                case 3:
                    q.display();
                    break;
                default:
                    cout << "Invalid choine\n";
            }
        }

    }
     
    return 0;
}

/*
    Stack : push, pop, empty, size, top
    Queue : push, pop, empty, size, front



*/













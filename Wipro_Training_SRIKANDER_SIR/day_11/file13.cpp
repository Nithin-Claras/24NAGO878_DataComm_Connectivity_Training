#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T> 
class MyStack 
{
protected:  
    vector<T>     v;
public :
    void push(const T &ele)
    {
        v.push_back(ele);
    }
    bool empty()
    {
        return v.size() == 0;
    }
    int pop()
    {
        if(v.size() == 0)
            throw "Stack Empty";
        auto ele = v.back();
        v.pop_back();
        return ele;
    }
    void display()
    {
        // vector<T>::iterator it 
        auto it = v.rbegin();
        while(it != v.rend())
        {
            cout << *it <<" ";
            it++;
        }
    }
    T top() 
    {
        return v.back();
    }
};
int main()
{
    MyStack<int>    s1;
    MyStack<string> s2;
   
    s1.push(12);
    s1.push(78);
    s1.display();
    
    s2.push("Nithin");
    s2.push("Mary");
    s2.display();
    cout << "End of Program \n";
    return 0;
}

   



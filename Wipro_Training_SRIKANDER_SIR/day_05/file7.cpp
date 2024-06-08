#include <iostream>
using namespace std;

class MyStack
{
    int topIndex;
    int *buffer;
    const int SIZE;
public:
    MyStack(int p_size) : SIZE(p_size) 
    {
        topIndex = -1;
        buffer = new int[SIZE];
    }
    void push(int ele)
    {
        if(SIZE == topIndex - 1)
            cout << "Stack Full \n";
        else{
            // buffer[++topIndex] = ele;
            *(buffer + ++topIndex) = ele;
        }
    }
    void display()
    {
        for(int i = topIndex ; i >= 0 ; i--)
            cout << buffer[i] << endl;
    }
};

int main( )
{
    MyStack     s1 = MyStack{5}; 
    s1.push(12);
    s1.push(23);
    s1.push(34);  
    s1.display(); 
}

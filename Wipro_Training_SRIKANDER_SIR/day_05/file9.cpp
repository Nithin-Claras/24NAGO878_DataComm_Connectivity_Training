#include <iostream>
#include <typeinfo>
using namespace std;
template <class T> 
class MyStack
{
    int topIndex;
    T *  buffer;
    const int SIZE;
public:
    MyStack(int p_size) : SIZE(p_size)
    {
        topIndex = -1;    
        buffer = new T[SIZE];
    }
    void push(T ele);
    void display() const 
    {
        cout<<typeid(this).name() << endl;
        for(int i = topIndex ; i >= 0 ; i--)
            cout << buffer[i] << endl;
    }
    
};

template <class T>
void MyStack<T>::push(T ele)
{
	if(SIZE == topIndex - 1)
            cout << "Stack Full \n";
        else{
            buffer[++topIndex] = ele;
            //*(buffer+ ++topIndex) = ele;
        }
}

int main( )
{
    MyStack  <int>   s1 = MyStack<int>(5); 
    s1.push(12);
    s1.push(3.4);
    s1.push(8.77);  
    s1.display(); 
    

    MyStack  <string>   s2 = MyStack<string>(5); 
    s2.push("Akash");
    s2.push("Arsh");
    s2.display();

}


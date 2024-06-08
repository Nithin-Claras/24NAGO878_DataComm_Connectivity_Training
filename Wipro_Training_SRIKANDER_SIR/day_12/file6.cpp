#include <iostream>
#include <unistd.h>
#include <thread>

using namespace std;

class A 
{
    char c;
    int n;
public:
    A (char ch, int m) : c(ch),n(m)
    {
        
    }
    void print()
    {
        for(int i=0; i<n; i++)
        {
            cout << c;
        }
        // cout << endl;
    }
};

int main()
{
    A obj('F',500000);
    A obj2('G', 300000);
    
    thread t1(&A::print, &obj);
    thread t2(&A::print, &obj2);
    
    t1.join();
    t2.join();
   
    return 0;
}


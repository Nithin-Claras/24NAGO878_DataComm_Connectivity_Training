#include <iostream>
#include <unistd.h>
#include <thread>

using namespace std;

void print (char c, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << c;
    }
}

int main()
{
    thread t1(print, '*', 200000);
    thread t2(print, '-', 100000);
    
    t1.join();
    t2.join();
   
    return 0;
}


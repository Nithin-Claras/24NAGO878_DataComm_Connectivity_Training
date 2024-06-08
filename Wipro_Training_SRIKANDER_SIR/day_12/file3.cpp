#include <iostream>
#include <unistd.h>
#include <thread>

using namespace std;

void print ()
{
    for(int i=0; i<100000; i++)
    {
        cout << '*';
    }
}

int main()
{
    thread t1(print);
    //print();
    for(int i=0; i<10000; i++)
    {
        cout << '-';
    }
    
    t1.join();
    return 0;
}


#include <iostream>
#include <unistd.h>
#include <thread>

using namespace std;

void print (char &c, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << c;
    }
    
    c = '^';
}

int main()
{
    char c1 = '*';
    char c2 = '-';

    thread t1(print, ref(c1), 20);
    thread t2(print, ref(c2), 10);
    
    t1.join();
    t2.join();
    
    cout << "\n after modification in function : " << c1 << c2;
   
    return 0;
}


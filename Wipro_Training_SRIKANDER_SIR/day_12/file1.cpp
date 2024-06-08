#include <iostream>
#include <thread>

using namespace std;

void print ()
{
    cout << "Print function \n";
}

int main()
{
    thread t1(print);
    //thread t2(print);
    thread t2([](){ cout << "Lambda function \n"; });
    
    t1.join();
    t2.join();
    
    return 0;
}


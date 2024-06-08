#include <iostream>
#include <unistd.h>
#include <thread>

using namespace std;

void print ()
{
    printf("%s : Process ID : %d \n", __func__, getpid());
    cout << "Thread ID in Print " << this_thread::get_id() << endl;
}

int main()
{
    printf("%s : Process ID : %d \n", __func__, getpid());
    cout << "Thread ID of Main thread " << this_thread::get_id() << endl;
    //print();
    thread t1(print);
    cout << "Thread ID of t1 thread " << t1.get_id() << endl;
    t1.join();
    
    return 0;
}


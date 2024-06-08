#include <stdio.h>
#include <unistd.h>
#include <thread>
#include <iostream>
#include <mutex>
#include <future>

using namespace std;

int global = 0;
mutex m_global;

int add(int a, int b)
{
	cout << this_thread::get_id() << endl;
	return a+b;
}

int main()
{
	int a = 5;
	int b = 10;
	cout << this_thread::get_id() << endl;
	future<int> f = async(add, a, b);
	
	cout << f.get() << endl;
}

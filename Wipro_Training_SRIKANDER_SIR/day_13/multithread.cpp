#include <iostream>
#include <unistd.h>
#include <thread>


using namespace std;

int global = 0;
int *ptr;

void update()
{
	global++;
	*ptr = *ptr + 1;
	printf("Child (%d) : global = %d *ptr = %d \n" , getpid(), global, *ptr);
	cout << this_thread::get_id() << endl;
}

int main()
{
	ptr = new int(0);
	
	thread t1(update);
	
	t1.join();
	printf("Parent (%d) : global = %d *ptr = %d \n" , getpid(), global, *ptr);
	cout << this_thread::get_id() << endl;
}

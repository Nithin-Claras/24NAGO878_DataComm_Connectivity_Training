#include <iostream>
#include <unistd.h>

using namespace std;

int global = 0;
int *ptr;

void update()
{
	global++;
	*ptr = *ptr + 1;
}

int main()
{
	ptr = new int(0);
	
	if(fork() == 0)
	{
		update();
		printf("Child (%d) : global = %d *ptr = %d \n" , getpid(), global, *ptr);
	} else {
		
		sleep(1);
		printf("Parent (%d) : global = %d *ptr = %d \n" , getpid(), global, *ptr);
	}
}

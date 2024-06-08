#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("Parent pid = %d and The process id = %d \n" , getpid(), getppid());
	for(int i=0 ; ; i++)
	{
		//printf("Hello %d \n", i);
		sleep(1);
	}
}

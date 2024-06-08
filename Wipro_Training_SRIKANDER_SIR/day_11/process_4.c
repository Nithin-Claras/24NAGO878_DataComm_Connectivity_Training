#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("Parent pid = %d and The process id = %d \n" , getpid(), getppid());
	
	if(fork() == 0)
	{
		for(int i = 0; i <10; i++)
		{
			printf("*"); fflush(stdout); sleep(1);
		}
	}
	else
	{
		for(int i = 0; i < 10; i++)
		{
			printf("-"); fflush(stdout); sleep(1);
		}
	}
}

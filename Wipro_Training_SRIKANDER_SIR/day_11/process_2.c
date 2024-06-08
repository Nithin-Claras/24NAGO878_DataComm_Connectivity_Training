#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("The process id = %d \n" , getpid());
	for(int i=0 ; ; i++)
	{
		//printf("Hello %d \n", i);
		sleep(1);
	}
}
